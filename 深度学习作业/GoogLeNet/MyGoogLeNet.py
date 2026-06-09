import torch
from torch import nn
from torchvision import transforms,datasets
from torch.utils.data.dataloader import DataLoader
import torch.optim as optim
import torch.nn.functional as F
from torchinfo import summary
import os
from torch.cuda.amp import autocast, GradScaler


# 定义一个 Inception 块，继承nn.Module
class Inception(nn.Module):
 def __init__(self, in_channels,out_channels_list):
    #初始化inception，定义其中包含的各个分支
    #in_channeals是输入特征图的通道数
    #out_channels_list是存放各个分支输出通道数的一个列表

    #父类初始化方法
    super(Inception, self).__init__()

    #branch1是1by1的卷积，不会改变空间尺寸，把输出通道储存在out_channels_list的第一个元素
    self.branch1 = nn.Conv2d(in_channels,out_channels_list[0], kernel_size=1)

    #branch2是3by3的卷积，用1填充保证尺寸不变
    self.branch2 = nn.Conv2d(in_channels,out_channels_list[1], kernel_size=3,padding=1)

    if len(out_channels_list)>=3:#使用过程中只遇到了数量为2和3的情况，出于简单没有考虑更多情况
        #branch3是5by5卷积，当输出有三个通道才使用
        self.branch3 = nn.Conv2d(in_channels,out_channels_list[2], kernel_size=5,padding=2)
    
    #branch4先池化再卷积，池化选用3by3的最大池化，步长为1，填充1
    #池化层没有要训练的参数，后面接一个卷积1by1,输出为列表最后一个元素
    self.branch4 = nn.Sequential(nn.MaxPool2d(3,stride=1,padding=1),
                                nn.Conv2d(in_channels,out_channels_list[-1],1))
    
    #前向传播函数
    #传入参数x为一个(batch_size,in_channels,H，W)的张量
 def forward(self, x):
    #分别计算四个分支的输出
    branch1 = self.branch1(x)
    branch2 = self.branch2(x)
    branch4 = self.branch4(x)

    #检查是否有branch3的属性
    if hasattr(self, 'branch3'):
        branch3 = self.branch3(x)
        outputs = [branch1, branch2, branch3, branch4]
    else:
        outputs = [branch1, branch2, branch4]

    #拼接后的通道数为各分支输出通道数之和
    return torch.cat(outputs, 1)
 


"""序号  类型              卷积核/步幅/填充    输入尺寸             输出尺寸            通道             激活/归一化        
------------------------------------------------------------------------------------------------------------------------
1      Conv2d              3x3 / 1 / 1        3x64x64          32x64x64          32               BN + ReLU          
2      MaxPool2d           2x2 / 2 / 0        32x64x64         32x32x32          32                              
3      Conv2d              3x3 / 1 / 1        32x32x32         64x32x32          64              BN + ReLU          
4      MaxPool2d           2x2 / 2 / 0        64x32x32         64x16x16          64                                 

5      Inception1                             64x16x16         128x16x16         128                               
       分支1 (1x1)         1x1 / 1 / 0        64x16x16         32x16x16           32              BN+ReLU             
       分支2 (3x3)         3x3 / 1 / 1        64x16x16         32x16x16           32              BN+ReLU             
       分支3 (5x5)         5x5 / 2 / 2        64x16x16         32x16x16           32              BN+ReLU            
       分支4 (池化+1x1)    3x3池化/1/1 + 1x1  64x16x16         32x16x16            32              BN+ReLU             

6      Inception2                             128x16x16        192x16x16         192            -                   
       分支1 (1x1)         1x1 / 1 / 0        128x16x16        64x16x16           64             BN+ReLU            
       分支2 (3x3)         3x3 / 1 / 1        128x16x16        64x16x16           64             BN+ReLU             
       分支3 (池化+1x1)    3x3池化/1/1 + 1x1  128x16x16         64x16x16             64             BN+ReLU           

7      GlobalAvgPool2d                       192x16x16        192x1x1             192                               
8      Dropout             p=0.4                                                                                       
9      Linear                                192              10                   10                             """


#GoogLeNet类
class GoogLeNet(nn.Module):
    def __init__(self):
        #调用父类初始化
        super(GoogLeNet,self).__init__()

        self.net=nn.Sequential(
        #第一层:输入通道数为三（RGB图像），输出32通道，卷积核为3by3,步长为默认的0，填充0
        #输入图像为3X64X64，经过这一层变为32X62X62
        nn.Conv2d(3, 32, kernel_size=3),

        #批归一化，对32个通道进行标准化，控制梯度
        nn.BatchNorm2d(32),

        #使用ReLU激活函数，引入非线性
        nn.ReLU(),

        #最大池化，核大小为2，步长为2，大小变为原来的一半（32X31X31)
        nn.MaxPool2d(kernel_size=2, stride=2),

        #第三层：根据上一层的输出（32X31X31)，这一层输入设为32，输出设为64，卷积核3X3，填充默认为0
        nn.Conv2d(32,64,kernel_size=3),

        #对输出的64通道批归一化
        nn.BatchNorm2d(64),

        #激活函数
        nn.ReLU(),

        #最大池化，核为2X2,步长为2，高和宽再次减半(64X14X14)
        nn.MaxPool2d(kernel_size=2, stride=2),

        #第一个Inception，上面输出64通道，123每个branch都是32，加上branch4，一共是128
        Inception(64,[32,32,32]),

        #第二个Inception，上一层输出128，这一层输出两个卷积分支各64，池化分支64，一共64X3=92通道
        Inception(128,[64,64]),

        #自适应平均池化，将特征图高宽调整为（1，1）无论输入尺寸是多少，输出都是192X1X1
        nn.AdaptiveAvgPool2d((1,1)),

        #展平层，将192X1X1的张量展平成(batch_size,192)
        nn.Flatten(),

        #Drropot正则化，以0.4的概率随机舍弃神经元，防止过拟合
        nn.Dropout(0.4),

        #全连接层，输入192维，输出10维
        nn.Linear(192, 10)
        )

    #前向传播
    def forward(self,x):
        y=self.net(x)
        return y

if __name__=="__main__":
    #图像转换，做数据增强
    transforms = transforms.Compose(
        [
            #图片尺寸缩放
            transforms.Resize([64, 64]),

            #随机水平翻转
            transforms.RandomHorizontalFlip(),

            #随机旋转（10度）
            transforms.RandomRotation(10),

            #调整亮度和对比度
            transforms.ColorJitter(brightness=0.2, contrast=0.2),

            #转化为张量
            transforms.ToTensor(),

            #标准化
            transforms.Normalize((0.5, 0.5, 0.5), (0.5, 0.5, 0.5))
        ]
    )

    #超参数设置
    BATCH_SIZE = 1024#每次迭代的图片数量
    EPOCH = 200  #迭代次数

    #加载数据
    # ImageFolder 会根据 root 下的子文件夹自动划分标签，文件夹名即为类别名
    trainset = datasets.ImageFolder(root=r' dataset\train',transform=transforms)
    testset1 = datasets.ImageFolder(root=r' dataset\test1',transform=transforms)
    testset2 = datasets.ImageFolder(root=r' dataset\test2',transform=transforms)

    print(f"训练集图片数量: {len(trainset)}")
    print(f"测试集1图片数量: {len(testset1)}")
    print(f"测试集2图片数量: {len(testset2)}")

    # batch_size: 每批样本数
    # shuffle=True: 每个 epoch 打乱数据顺序
    # pin_memory=True: 锁页内存，加快数据从 CPU 到 GPU 的拷贝速度
    train_loader = DataLoader(trainset, batch_size=BATCH_SIZE, shuffle=True, pin_memory=True)
    test_loader1 = DataLoader(testset1, batch_size=BATCH_SIZE, shuffle=True, pin_memory=True)
    test_loader2 = DataLoader(testset2, batch_size=BATCH_SIZE, shuffle=True, pin_memory=True)

    #使用GPU并把数据转到GPU上
    device = torch.device("cuda")
    net = GoogLeNet().to(device)

    summary(net, input_size=(1, 3, 64, 64), device=device)
    print(f'标签对应的ID: {trainset.class_to_idx}')

    #设置优化器、损失函数
    criterion = nn.CrossEntropyLoss()#交叉熵损失

    #两个优化器，用于反向传播梯度下降
    #optimizer = optim.SGD(net.parameters(), lr=0.01, momentum=0.9)
    optimizer = optim.Adam(net.parameters(), lr=0.001, weight_decay=1e-4)

# 开始训练
    print("Start")

    # 最佳准确率记录
    best_accuracy = 0.0

    # 创建梯度缩放器，用于混合精度训练，可以加速训练并减少显存占用
    scaler = GradScaler()
    for epoch in range(EPOCH):

         # 将模型设置为训练模式，启用 Dropout、BatchNorm 更新等
        net.train()
        train_loss = 0.0

        for datas, labels in train_loader:
            # 将数据和标签转移到 GPU
            datas, labels = datas.to(device), labels.to(device)

            # 每次反向传播前将优化器的梯度清零
            optimizer.zero_grad()

            # 开启自动混合精度上下文，前向传播自动使用 float16 加速
            with autocast():

                 # 模型前向计算
                outputs = net(datas)

                # 计算损失
                loss = criterion(outputs, labels)

            # 使用梯度缩放器对 loss 进行缩放，然后反向传播
            scaler.scale(loss).backward()

            # 使用缩放后的梯度更新模型参数
            scaler.step(optimizer)
            scaler.update()

            # 累加损失（loss.item() 将标量张量转为 Python 数字）
            train_loss += loss.item()

        # 计算当前 epoch 的平均损失
        avg_loss = train_loss / len(train_loader)
        print(f"Epoch [{epoch+1}/{EPOCH}]  Average Loss: {avg_loss:.5f}")

        # 每 10 个 epoch 验证一次
        if (epoch + 1) % 10 == 0:

             # 将模型设置为评估模式，关闭 Dropout，BatchNorm 使用全局统计量，避免不必要的性能开销
            net.eval()

            # 初始化测试集1和测试集2的正确计数和总计数
            correct1 = 0
            total1 = 0
            correct2 = 0
            total2 = 0

             # 关闭梯度计算
            with torch.no_grad():
                # 测试 test_loader1
                for datas1, labels1 in test_loader1:
                    datas1, labels1 = datas1.to(device), labels1.to(device)
                    outputs = net(datas1)
                    # 取输出中概率最大的类别索引
                    _, predicted = torch.max(outputs, 1)
                    # 累加当前批次样本总数
                    total1 += labels1.size(0)
                    # 累加预测正确的样本数，(predicted == labels1) 生成布尔张量，sum() 统计 True 的数量
                    correct1 += (predicted == labels1).sum().item()

                # 测试 test_loader2
                for datas2, labels2 in test_loader2:
                    datas2, labels2 = datas2.to(device), labels2.to(device)
                    outputs = net(datas2)
                    _, predicted = torch.max(outputs, 1)
                    total2 += labels2.size(0)
                    correct2 += (predicted == labels2).sum().item()

            acc1 = 100.0 * correct1 / total1
            acc2 = 100.0 * correct2 / total2
            print(f"  Validation accuracy - test1: {acc1:.2f}% , test2: {acc2:.2f}%")

                # 计算两个测试集准确率的平均值作为评价指标
                # 如果当前平均准确率高于历史最佳，则保存模型            
            if (acc1+acc2)/2 > best_accuracy:
                best_accuracy = (acc1+acc2)/2 
                os.makedirs("pth", exist_ok=True)
                save_path = " pth/GoogLeNetModel.pth"
                torch.save(net.state_dict(), save_path)
                print("  Save best model ")

    print("Training finished!")