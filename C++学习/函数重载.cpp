#include<iostream>
#include<string>
using namespace std;

//函数重载：可以让函数名相同，提高复用性
//函数重载满足条件
//1、同一个作用域下
//2、函数名称相同
//3、函数参数类型不同、个数不同、顺序不同
//注意：函数的返回值不可以作为函数重载的条件
void funct() {
	cout << "函数funct()调用" << endl;
}

void funct(int a) {
	cout << "函数funct(int a)调用" << endl;
}

void funct(double a) {
	cout << "函数funct(double a)调用" << endl;
}

void funct(int a, double b) {
	cout << "函数funct(int a, double b)调用" << endl;
}

void funct(double a, int b ) {
	cout << "函数funct(double a, int b)调用" << endl;
}

//int funct(double a, int b) {
//	cout << "函数funct(double a, int b)调用" << endl;
//	return 1;
//}

//函数重载碰到引用
void funct(char &a) {
	cout << "函数funct(char &a)调用" << endl;
}

void funct(const char &a) {
	cout << "函数funct(const char &a)调用" << endl;
}

//函数重载碰到默认参数
//void funct(int a,int b=10) {
//	cout << "函数funct(int a,int b=10)调用" << endl;
//}
//尽量避免



int main37() {
	int mainNum = 37;
	funct();
	funct(10);
	funct(3.14);
	funct(10, 3.14);
	funct(3.14, 10);

	char a = 'a';
	funct(a);
	funct('a');
	return 0;
}