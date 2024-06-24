#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//类模板成员函数类外实现

template<class T1, class T2>//类模板在模板参数列表中可以有默认参数
class Person006 {
public:
	//类模板成员函数类内实现
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

//类模板成员函数类外实现
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
	Person006<string, int> p1("孙悟空",10);
	p1.showinfo();

	return 0;

}