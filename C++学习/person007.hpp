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

//��ģ���Ա��������ʵ��
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
