#include<iostream>
#include<string>
#include"point.h"
#include"circle.h"
using namespace std;

//构造函数调用规则


class Person1 {
private:
	string p_name;
	string p_sex;
	int p_age;

public:
	
	////有参构造函数
	//Person1(int age) {
	//	p_age = age;
	//	cout << "Person1有参构造函数调用" << endl;
	//}

	//拷贝构造函数
	Person1(const Person1 &p) {
		p_age = p.p_age;
		cout << "Person1拷贝构造函数调用" << endl;
	}

	//析构函数
	~Person1()
	{
		cout << "Person1析构函数调用" << endl;
	}

	int getAge() {
		return p_age;
	}
};

int main46() {
	int mainNum = 46;
	//1、创建一个类，C++编译器会给每个类都添加至少3个函数
	//默认构造(空实现)
	//拷贝构造(空实现)
	//析构函数(值拷贝)
	//Person1 p1(18);
	//Person1 p2(p1); 
	//cout << p2.getAge()<< endl;

	//2、如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造
	//Person1 p3;//报错 没有默认构造函数
	//Person1 p4(10);
	//Person1 p5(p4);
	//cout << p5.getAge() << endl;

	//3、如果我们写了拷贝构造函数，编译器就不再提供其他普通构造函数了
	//Person1 p6;//报错 没有默认构造函数
	//Person1 p7(10);//报错 没有有参构造函数

	return 0;

} 