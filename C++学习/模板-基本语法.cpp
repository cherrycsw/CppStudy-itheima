#include<iostream>
#include<string>
using namespace std;

//模板：C++另一种编程思想为泛型编程，主要利用的技术就是模板
//C++提供两种模板机制：函数模板和类模板

//函数模板的作用：建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表

//交换两个整形函数
void swapInt(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//交换两个浮点型函数
void swapDouble(double &a, double &b) {
	double temp = a;
	a = b;
	b = temp;
}

//函数模板
template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用的数据类型

void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

int main79() {
	int mainNum = 79;
	int a = 10;
	int b = 20;
	cout << a << endl;
	cout << b << endl;
	//swapInt(a, b);
	//利用函数模板交换
	mySwap(a, b);//1、自动类型推导
	mySwap<int>(a, b);//1、显示指定类型
	cout << a << endl;
	cout << b << endl;

	double c = 1.1;
	double d = 2.3;
	cout << c<< endl;
	cout << d << endl;
	mySwap(c, d);
	cout << c << endl;
	cout << d<< endl;

	cout << c << endl;
	cout << a << endl;
	//mySwap(c, a);//报错！ SWap函数中两个参数的类型要一致
	cout << c << endl;
	cout << a << endl;

	return 0;
}