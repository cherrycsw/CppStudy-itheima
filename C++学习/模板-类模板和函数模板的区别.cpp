#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//类模板和函数模板的区别：
//1、类模板没有自动类型推导的使用方式
//2、类模板在模板参数列表中可以有默认参数

template<typename T=int, typename K>//函数模板在模板参数列表中可以有默认参数
void  print(T &a,K &b) {
	T c = a;
	K d = b;
	cout <<c<< endl;
	cout << d<< endl;
}

template<class NameType, class AgeType = int>//类模板在模板参数列表中可以有默认参数
class Person002 {
public:
	Person002(NameType name, AgeType age) {
		this->name = name;
		this->age = age;
	}

	void showinfo() {
		cout << this->name << endl;
		cout << this->age << endl;
	}

public:
	NameType name;
	AgeType age;
};

int main86() {
	int mainNum = 86;
	int a = 10;
	int b = 20;
	char c1 = 'a';
	char c2 = 'b';
	//Person002 p1("寻悟空", 55);//报错！不能自动类型推导
	print(a, c1);//不报错，函数模板能自动类型推导
	Person002<string,int> p1("寻悟空", 55);//正确
	p1.showinfo();

	Person002<string> p2("猪八戒", 99);
	p2.showinfo();

	return 0;

}