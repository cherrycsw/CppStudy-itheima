#include<iostream>
#include<string>
using namespace std;

//引用做函数返回值
//1、不要返回局部变量的引用
int & test01() {
	int a = 10;
	return a;
}

int test02() {
	int b = 10;//局部变量，放在栈区
	return b;
}

//2、函数的调用可以作为左值
int & test03() {
	static int a = 10;//静态变量，放在全局区，生命周期随着程序结束释放
	return a;
}

int main35() {
	int mainNum = 35;

	int &ref1 = test01();
	cout << ref1 << endl;//编译器保留一次
	cout << ref1 << endl;//函数执行完后会释放局部变量的内存

	int ref2 = test02();
	cout << ref2 << endl;
	cout << ref2 << endl;

	int &ref3 = test03();
	cout << ref3 << endl;
	cout << ref3 << endl;

	test03() = 1000;//函数的调用可以作为左值
	cout << ref3 << endl;
	cout << ref3 << endl;

	return 0;
}