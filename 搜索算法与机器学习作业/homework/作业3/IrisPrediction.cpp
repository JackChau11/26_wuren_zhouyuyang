#include"IrisPrediction.hpp"
#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<cctype>
#include <cstdlib>

/*trim()函数用于处理数据，去除空格或者回车等符号*/
std::string trim(const std::string& s){
    size_t start=0;
    while(start<s.size()&&isspace((unsigned char)s[start])){
        start++;
    }size_t end=s.size();
    while(end<=s.size()&&isspace((unsigned char)s[end])){
        end--;
    }
    return s.substr(start,end-start);
}

/*处理品种名字，将三个品种分别对应三个序号*/
int processLabel(const std::string& label_name){
    if(label_name=="setosa")return 1;
    if(label_name=="versicolor")return 2;
    if(label_name=="virginica")return 3;
    else{
        std::cerr<<"label error"<<std::endl;
        exit(1);
    }
}

svm_problem loadData(const char* file_name){

    //读入数据，处理可能的异常
    std::ifstream file(file_name);
    if(!file.is_open()){
        std::cerr<<"Open file error."<<std::endl;
        exit(1);
    }
    //读入表头
    std::string header;
    getline(file,header);

    //用vector存放标签
    std::vector<double> labels;

    //嵌套vector构成二维数组，用于存储节点
    std::vector<std::vector<svm_node>> all_nodes;

    //从文件中读取一行的数据，并进行处理
    std::string line;
    while(getline(file,line)){
        //跳过空行
        if(line.empty())continue;
        //stringstream类型变量ss存储一行数据，temp储存按逗号分割后的每个特征对应的数据
        std::stringstream ss(line);
        std::string temp;
        std::vector<double> features(4);
        for(int i=0;i<4;i++){
            getline(ss,temp,',');
            features[i]=stod(temp);
        }

        //为标签分配序号(用前面的processLabel()函数)
        std::string label_str;
        getline(ss,label_str,',');
        trim(label_str);
        int number=processLabel(label_str);
        labels.push_back(number);

        //将4个特征和数据对应起来
        std::vector<svm_node> node_row;
        for(int i=0;i<4;i++){
            svm_node node;
            node.index=i+1;
            node.value=features[i];
            node_row.push_back(node);
        }

        //构造一个end_node,index设为-1,方便后续处理
        svm_node end_node;
        end_node.index=-1;
        node_row.push_back(end_node);

        all_nodes.push_back(node_row);


    }
    file.close();

    //构建svm_problem对象
    svm_problem problem;
    problem.l=labels.size();
    problem.y=new double[problem.l];
    problem.x=new svm_node*[problem.l];

    //为problem的X和y赋上相应的值
    for(int i=0;i<problem.l;i++){
        problem.y[i]=labels[i];
        problem.x[i]=new svm_node[all_nodes[i].size()];
        for(size_t j=0;j<all_nodes[i].size();j++){
            problem.x[i][j]=all_nodes[i][j];
        }
    }
    return problem;
}

//使用了指针，释放内存确保安全
void free(svm_problem& problem){

    for(int i=0;i<problem.l;i++){
        delete[] problem.x[i];
    }
    delete[] problem.x;
    delete[] problem.y;
}
