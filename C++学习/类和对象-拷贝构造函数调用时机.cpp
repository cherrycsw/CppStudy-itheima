#include<iostream>
#include<string>
#include"point.h"
#include"circle.h"
using namespace std;

//拷贝构造函数调用时机

class Person {
private:
	string p_name;
	string p_sex;
	int p_age;

public:
	//无参(默认)构造函数
	Person() {
		cout << "Person无参(默认)构造函数调用" << endl;
	}
	//有参构造函数
	Person(int age) {
		p_age = age;
		cout << "Person有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p) {
		//将传入人身上所有属性拷贝到我身上
		p_age = p.p_age;
		cout << "Person拷贝构造函数调用" << endl;
	}

	int getAge() {
		return p_age;
	}

	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}
};

void doWork1(Person p) {

}

Person doWork2() {
	Person p4;
	cout << &p4 << endl;
	return p4;
}

//调用
int main45() {
	int mainNum = 45;
	//1、使用一个已经创建完毕的对象来初始化一个新对象
	Person p1(20);
	Person p2(p1);
	cout << "p2的年龄："<<p2.getAge() << endl;

	//2、值传递的方式给函数参数传值
	Person p3;
	doWork1(p3);//相当于Person p=p3;隐式调用拷贝构造函数

	//3、值方式返回局部对象
	cout << &doWork2() << endl;
	return 0;
}