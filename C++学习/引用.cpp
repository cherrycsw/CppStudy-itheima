#include<iostream>
#include<string>
using namespace std;



int main33() {
	//引用
	int a = 10;
	int b = 20;
	//int &c;//错误示范，引用必须得初始化
	int &c = a;
	int &d = a;
	//int &c = b;//错误示范，引用一旦初始化后就不可以更改了，近似一个指针常量，内容可以改变，地址不能变
	cout << d << endl;
	cout << &d << endl;
	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;
	c = b;//赋值操作，并不是更改引用
	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;
	cout << c << endl;
	cout << a << endl;
	int *p = &a;
	p = &b;
	cout << *p << endl;
	return 0;
}