#include<iostream>
#include<string>
//#include"person007.h"

//��һ�ֽ������
//#include"person007.cpp"

//�ڶ��ֽ����������.h�ļ���.cpp�ļ�����д��һ�𣬽���׺����Ϊ.hpp�ļ�(����)
#include"person007.hpp"

using namespace std;
//��ģ����ļ���д���⣺�����Ƿ��ļ���д�󣬱��������ӵ�ʱ��ֻ������person007.h�еĴ���ͱ�cpp�ļ��еĴ��룬
//��person007.h�е�����ģ���࣬���Ա������Ҫ����ʱ�Ŵ�������ʼ��ʱ���ǲ������ģ������ڱ�cpp�ļ��е�����ģ
//��ĳ�Ա������ʱ��,�������ᱨ��


//template<class T1, class T2>//��ģ����ģ������б��п�����Ĭ�ϲ���
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

//��ģ���Ա��������ʵ��
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
	Person007<string, int> p1("�����", 10);
	p1.showinfo();

	return 0;

}