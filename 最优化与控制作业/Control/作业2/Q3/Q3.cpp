#include <OsqpEigen/OsqpEigen.h>
#include <iostream>

//本程序已编译好，终端中输入./demo即可运行

int main(){

	//定义矩阵P
	Eigen::SparseMatrix<double> P(2,2);
	P.insert(0,0)=1.0;
	P.insert(1,1)=10.0;//其余位置默认为0
	
	//定义向量q
	Eigen::VectorXd q(2);
	q << -3.0,-30.0;
	
	//定义A,l,u
	Eigen::SparseMatrix<double> A(1,2);
	A.insert(0,0)=1.0;
	A.insert(0,1)=1.0;
	
	Eigen::VectorXd l(1);
	l << -OsqpEigen::INFTY;   // 负无穷
	
	Eigen::VectorXd u(1);
	u << 4.0;
	
	//创建求解器
	OsqpEigen::Solver solver;
	
	solver.settings() -> setVerbosity(false);
	solver.data() -> setNumberOfVariables(2);//两个变量
	solver.data() -> setNumberOfConstraints(1);//一个约束
	
	//加载数据
	solver.data() -> setHessianMatrix(P);
	solver.data() -> setGradient(q);
	solver.data() -> setLinearConstraintsMatrix(A);
	solver.data() -> setLowerBound(l);
	solver.data() -> setUpperBound(u);	
	
	//初始化求解器并求解
	if(!solver.initSolver()){
		std::cerr<<"初始化失败"<<std::endl;
		return 1;
	}
	if(solver.solveProblem() != OsqpEigen::ErrorExitFlag::NoError){
		std::cerr<<"求解失败"<<std::endl;
		return 1;
	}

	//输出结果
	Eigen::VectorXd result = solver.getSolution();
	std::cout<<"求解结果： ("<<result(0)<<","<<result(1)<<")"<<std::endl;

	return 0;
}
