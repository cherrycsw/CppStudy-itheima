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


