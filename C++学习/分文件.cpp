#include<iostream>
#include"swap.h"
using namespace std;



//1.创建.h后缀的头文件
//2.创建.cpp后缀名的源文件
//3.在头文件中写函数的申明
//4.在源文件中先函数的定义
int main19() {
	int A = 10, B = 20;

	cout << "A，B交换前的值为：A=" << A << " B=" << B << endl;

	swap(A, B);

	return 0;
}