import torch
from torch import nn
from torchvision import transforms,datasets
from torch.utils.data.dataloader import DataLoader
import torch.optim as optim
import torch.nn.functional as F
from torchinfo import summary
import os
from torch.cuda.amp import autocast, GradScaler

"""层名                  类型                        卷积核/步幅/填充              激活函数       输出尺寸 (C×H×W)
---------------------------------------------------------------------------------------------------------------
Input                 -                           -                            -             3×64×64

Conv1                 Conv2d                      3×3 / 1 / 1                   ReLU          64×64×64

ResBlock1_Conv1       Conv2d                      3×3 / 1 / 1                   ReLU          64×64×64
ResBlock1_Conv2       Conv2d                      3×3 / 1 / 1                   ReLU          64×64×64

ResBlock2_Conv1       Conv2d                      3×3 / 1 / 1                   ReLU          64×64×64
ResBlock2_Conv2       Conv2d                      3×3 / 1 / 1                   ReLU          64×64×64

ResBlock3_Conv1       Conv2d                      3×3 / 2 / 1                   ReLU          128×32×32
ResBlock3_Conv2       Conv2d                      3×3 / 1 / 1                   ReLU          128×32×32

ResBlock4_Conv1       Conv2d                      3×3 / 1 / 1                   ReLU          128×32×32
ResBlock4_Conv2       Conv2d                      3×3 / 1 / 1                   ReLU          128×32×32

GlobalAvgPool         AdaptiveAvgPool2d           输出 1×1                      -             128×1×1

FC           ss         Linear                      in=128, out=10               -             10"""
# 残差块
class ResidualBlock(nn.Module):
        #in_channels (int): 输入特征图的通道数
        #out_channels (int): 输出特征图的通道数
        #stride (int): 第一个卷积层的步幅，默认为1。当stride=2时进行下采样。
    def __init__(self, in_channels,out_channels,stride=1):
        # 调用父类 nn.Module 的构造函数
        super().__init__()

        self.net = nn.Sequential(

        # 第一个卷积层：输入通道 in_channels，输出通道 out_channels，3x3卷积核，padding=1保持尺寸
        nn.Conv2d(in_channels,out_channels, kernel_size=3, padding=1,stride=stride),

         # 批归一化
        nn.BatchNorm2d(out_channels),

        # 第二个卷积层：输出通道仍为 out_channels，步幅固定为1，保持特征图尺寸不变
        nn.Conv2d(out_channels,out_channels, kernel_size=3, stride=1,padding=1),


        nn.BatchNorm2d(out_channels),
        
         # 注意：这里没有激活函数，残差相加之后再经过 ReLU

        )

        # 设置捷径分支：当输入输出维度不匹配时，用1x1卷积调整
        if stride != 1 or in_channels != out_channels:
            # 需要调整维度，使用1x1卷积，步幅与主路径第一个卷积的stride相同
            self.shortcut = nn.Sequential(
                nn.Conv2d(in_channels, out_channels, kernel_size=1,
                          stride=stride, padding=0),# 1x1卷积，步幅stride，padding=0不改变空间尺寸(除步幅)
                nn.BatchNorm2d(out_channels)
            )
        else:
            self.shortcut = nn.Identity()
        
    #前向传播
    #x是输入张量，形状为 (batch, in_channels, height, width)
    def forward(self, x):
        out = self.net(x)# 主路径输出，未激活

        # 加上捷径分支（恒等或1x1卷积后的结果）
        out += self.shortcut(x)

         # 相加后再经过 ReLU 激活函数，返回
        return F.relu(out)
    

class ResNet(nn.Module):
    def __init__(self):

        #调用父类构造函数
        super(ResNet, self).__init__()


        self.net = nn.Sequential(

        #输入图像为 3 通道(RGB) 64x64 大小
        nn.Conv2d(3, 64, kernel_size=3,stride=1,padding=1), 

        # 批归一化，对64个通道
        nn.BatchNorm2d(64),

        #使用ReLU激活函数
        nn.ReLU(),

        #残差块1：输入64通道，输出64通道，stride=1，尺寸不变
        ResidualBlock(64,64,stride=1),

        #残差块2：同样输入64输出64，stride=1
        ResidualBlock(64,64,stride=1),

        #残差块3：输入64，输出128，stride=2，空间尺寸减半
        ResidualBlock(64,128,stride=2),

        #残差块4：输入128，输出128，stride=1，尺寸保持32x32
        ResidualBlock(128,128,stride=1),

        #全局自适应平均池化，将每个通道的空间尺寸池化到 (1,1)，输出形状 (batch,128,1,1)
        nn.AdaptiveAvgPool2d((1,1)),

        #展平操作，将 (batch_size,128,1,1) 变成 (batch_size,128)
        nn.Flatten(),

        #全连接层：输入128维特征，输出10个类别
        nn.Linear(128,10)


        )

    #前向传播
    def forward(self, x):
        y = self.net(x)
        return y


#以下部分和GoogLeNet相同
if __name__=="__main__":
    #图像转换
    transforms = transforms.Compose(
        [
            transforms.Resize([64, 64]),
            transforms.RandomHorizontalFlip(),
            transforms.RandomRotation(10),
            transforms.ColorJitter(brightness=0.2, contrast=0.2),
            transforms.ToTensor(),
            transforms.Normalize((0.5, 0.5, 0.5), (0.5, 0.5, 0.5))
        ]
    )

    #超参数设置
    BATCH_SIZE = 128
    EPOCH = 150  

    #加载数据
    trainset = datasets.ImageFolder(root=r'   dataset\train',transform=transforms)
    testset1 = datasets.ImageFolder(root=r'   dataset\test1',transform=transforms)
    testset2 = datasets.ImageFolder(root=r'   dataset\test2',transform=transforms)

    print(f"训练集图片数量: {len(trainset)}")
    print(f"测试集1图片数量: {len(testset1)}")
    print(f"测试集2图片数量: {len(testset2)}")

    train_loader = DataLoader(trainset, batch_size=BATCH_SIZE, shuffle=True, pin_memory=True)
    test_loader1 = DataLoader(testset1, batch_size=BATCH_SIZE, shuffle=False, pin_memory=True)
    test_loader2 = DataLoader(testset2, batch_size=BATCH_SIZE, shuffle=False, pin_memory=True)

    device = torch.device("cuda")
    net = ResNet().to(device)

    summary(net, input_size=(1, 3, 64, 64), device=device)
    print(f'标签对应的ID: {trainset.class_to_idx}')

    #设置优化器、损失函数
    criterion = nn.CrossEntropyLoss()
    optimizer = optim.SGD(net.parameters(), lr=0.005, momentum=0.9)
    # optimizer = optim.Adam(net.parameters(), lr=0.001, weight_decay=1e-4)

# 开始训练
    print("Start")

    best_accuracy = 0.0
    scaler = GradScaler()
    for epoch in range(EPOCH):
        net.train()
        train_loss = 0.0

        for datas, labels in train_loader:
            datas, labels = datas.to(device), labels.to(device)
            optimizer.zero_grad()
            with autocast():
                outputs = net(datas)
                loss = criterion(outputs, labels)
            scaler.scale(loss).backward()
            scaler.step(optimizer)
            scaler.update()
            train_loss += loss.item()


        avg_loss = train_loss / len(train_loader)
        print(f"Epoch [{epoch+1}/{EPOCH}]  Average Loss: {avg_loss:.5f}")

        if (epoch + 1) % 10 == 0:
            net.eval()
            correct1 = 0
            total1 = 0
            correct2 = 0
            total2 = 0

            with torch.no_grad():
                for datas1, labels1 in test_loader1:
                    datas1, labels1 = datas1.to(device), labels1.to(device)
                    outputs = net(datas1)
                    _, predicted = torch.max(outputs, 1)
                    total1 += labels1.size(0)
                    correct1 += (predicted == labels1).sum().item()

                for datas2, labels2 in test_loader2:
                    datas2, labels2 = datas2.to(device), labels2.to(device)
                    outputs = net(datas2)
                    _, predicted = torch.max(outputs, 1)
                    total2 += labels2.size(0)
                    correct2 += (predicted == labels2).sum().item()

            acc1 = 100.0 * correct1 / total1
            acc2 = 100.0 * correct2 / total2
            print(f"  Validation accuracy - test1: {acc1:.2f}% , test2: {acc2:.2f}%")

            if (acc1+acc2)/2 > best_accuracy:
                best_accuracy = (acc1+acc2)/2 
                os.makedirs("pth", exist_ok=True)
                save_path = "   pth/ResNetModel.pth"
                torch.save(net.state_dict(), save_path)
                print("  Save best model ")

    print("Training finished!")