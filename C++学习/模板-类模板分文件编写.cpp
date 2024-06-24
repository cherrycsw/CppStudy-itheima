#include<iostream>
#include<string>
//#include"person007.h"

//第一种解决方法
//#include"person007.cpp"

//第二种解决方法：将.h文件和.cpp文件内容写到一起，将后缀名改为.hpp文件(常用)
#include"person007.hpp"

using namespace std;
//类模板分文件编写问题：当我们分文件编写后，编译器连接的时候只看到了person007.h中的代码和本cpp文件中的代码，
//而person007.h中的类是模板类，其成员函数需要调用时才创建，开始的时候是不创建的，所以在本cpp文件中调用类模
//板的成员函数的时候,编译器会报错


//template<class T1, class T2>//类模板在模板参数列表中可以有默认参数
//class Person007 {
//public:
//	Person007(T1 name, T2 age);
//
//	void showinfo();
//
//public:
//	T1 name;
//	T2 age;
//};

//类模板成员函数类外实现
//template<typename T1, typename T2>
//Person007<T1, T2>::Person007(T1 name, T2 age) {
//	this->name = name;
//	this->age = age;
//}
//
//template<typename T1, typename T2>
//void Person007<T1, T2>::showinfo() {
//	cout << this->name << endl;
//	cout << this->age << endl;
//}

int main91() {
	int mainNum = 91;
	Person007<string, int> p1("孙悟空", 10);
	p1.showinfo();

	return 0;

}