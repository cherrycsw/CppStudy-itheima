#include<iostream>
#include"person007.h"
using namespace std;


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