#include<iostream>
#include<string>
using namespace std;
//继承中的同名静态成员处理方式

class Base {
public:
	static int m_A;//静态成员变量 类内声明类外初始化

	static void func() {
		cout << "Base-func()" << endl;//静态成员函数
	}
};
int Base::m_A=100;

class Son4 :public Base {
public:
	static int m_A;

	static void func() {
		cout << "Son4-func()" << endl;//静态成员函数
	}
};
int Son4::m_A = 200;

int main65() {
	int mainNum = 65;
	//1、通过对象访问静态成员变量
	Son4 s;
	cout << "m_A=" << s.m_A << endl;
	cout << "m_A=" << s.Base::m_A << endl;
	Base b;
	cout << "m_A=" << b.m_A << endl;

	//2、通过类名访问静态成员变量
	cout << Son4::m_A << endl;//第一个::通过类名访问
	cout << Son4::Base::m_A << endl;//第一个::通过类名访问,第二个::代表访问父类作用域
	cout << Base::m_A << endl;//第一个::通过类名访问

	//1、通过对象访问静态成员函数
	s.func();
	b.func();
	s.Base::func();

	//2、通过类名访问静态成员函数
	Son4::func();
	Base::func();
	Son4::Base::func();
	//总结：
	//继承的好处：减少重复代码
	//语法：class 子类(派生类)名 : 继承方式 父类(基类)名

	return 0;
}