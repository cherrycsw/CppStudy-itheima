#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//��ģ���Ա��������ʵ��

template<class T1, class T2>//��ģ����ģ������б��п�����Ĭ�ϲ���
class Person006 {
public:
	//��ģ���Ա��������ʵ��
	/*Person005(T1 name, T2 age) {
		this->name = name;
		this->age = age;
	}*/

	Person006(T1 name, T2 age);
	
	/*void showinfo() {
		cout << this->name << endl;
		cout << this->age << endl;
	}*/

	void showinfo();

public:
	T1 name;
	T2 age;
};

//��ģ���Ա��������ʵ��
template<typename T1,typename T2>
Person006<T1, T2>::Person006(T1 name, T2 age) {
	this->name = name;
	this->age = age;
}

template<typename T1, typename T2>
void Person006<T1,T2>::showinfo() {
	cout << this->name << endl;
	cout << this->age << endl;
}

int main90() {
	int mainNum = 90;
	Person006<string, int> p1("�����",10);
	p1.showinfo();

	return 0;

}