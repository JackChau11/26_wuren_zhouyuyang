#include<iostream>
#include<eigen3/Eigen/Dense>

//使用同文件夹下的run.sh运行，查看不同学习率的效果
//或将sed改为想要的学习率

int main(){
    //状态量
    Eigen::Vector2d X(0.0,0.0);

    //学习率
    double learning_rate = sed;

    //迭代次数
    int iter = 0;
    while(1){
        //梯度
        Eigen::Vector2d grad;

        //更新梯度
        grad << (X(0)-3.0),(X(1)-3.0)*10;//求导结果

        //循环停止条件：梯度的模小于10的-3次方或迭代次数大于1000
        if(grad.norm()<1e-3||iter>1000){
            break;
        }
        else{

        //更新X
        X -= grad*learning_rate;

        iter++;

        }

    }

    std::cout<<"最终迭代位置： "<<"("<<X(0)<<" , "<<X(1)<<")"<<std::endl;
    std::cout<<"迭代次数："<<iter<<std::endl;
}
