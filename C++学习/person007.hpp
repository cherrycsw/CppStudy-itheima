#pragma once
#include<iostream>
using namespace std;

template<class T1, class T2>//类模板在模板参数列表中可以有默认参数
class Person007 {
public:
	Person007(T1 name, T2 age);

	void showinfo();

public:
	T1 name;
	T2 age;
};

//类模板成员函数类外实现
template<typename T1, typename T2>
Person007<T1, T2>::Person007(T1 name, T2 age) {
	this->name = name;
	this->age = age;
}

template<typename T1, typename T2>
void Person007<T1, T2>::showinfo() {
	cout << this->name << endl;
	cout << this->age << endl;
}
