#pragma once
#include<iostream>
using namespace std;

template<class T1, class T2>//��ģ����ģ������б��п�����Ĭ�ϲ���
class Person007 {
public:
	Person007(T1 name, T2 age);

	void showinfo();

public:
	T1 name;
	T2 age;
};


