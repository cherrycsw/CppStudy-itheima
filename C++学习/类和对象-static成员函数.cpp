#include<iostream>
#include<string>
using namespace std;
//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
class Students {
public:
	static int s_a;
	int s_b;
public:
	static void func() {
		s_a = 100;
		//s_b = 200;//报错 静态成员函数不可以访问非静态成员变量，无法区分是哪个对象的
		cout << "静态成员函数调用" << endl;
	}

};

int Students::s_a = 10;//类外初始化

int main51() {
	int mainNum = 51;
	//1、通过对象访问
	Students s;
	s.func();
	//2、通过类名访问
	Students::func();
	return 0;

}