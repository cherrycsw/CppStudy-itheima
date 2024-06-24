#include<iostream>
#include<string>
using namespace std;
//在C++中，成员变量 成员函数分开存储
//只有非静态成员变量才属于类的对象(类的对象所占用的空间就是非静态成员变量所占空间大小)

class Students1 {


};

class Students2 {
public:
	static int s_a;
	int s_b;
public:
	void func() {
		
		cout << "非静态成员函数调用" << endl;
	}

};

int Students2::s_a = 0;//类外初始化

int main52() {
	int mainNum = 52;
	Students1 s1;
	cout << "size of s1=" <<sizeof(s1)<< endl;
	//结论：空对象占用内存空间为：1，C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置，每个空对象也应该有独一无二的内存地址

	Students2 s2;
	cout << "size of s2=" << sizeof(s2) << endl;//类的对象所占用的空间就是非静态成员变量所占空间大小
	return 0;

}  