#include<iostream>
#include<string>
#include"point.h"
#include"circle.h"
using namespace std;

//构造函数分类：有参构造、无参构造
//				拷贝构造、普通构造
class Person {
private:
	string name;
	string sex;
	int age;

public:
	//无参(默认)构造函数
	Person() {
		cout << "Person无参(默认)构造函数调用" << endl;
	}
	//有参构造函数
	Person(int a) {
		age = a;
		cout << "Person有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p) {
		//将传入人身上所有属性拷贝到我身上
		age = p.age;
		cout << "Person拷贝构造函数调用" << endl;
	}

	int getAge() {
		return age;
	}

	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}
};

//调用
int main44() {
	int mainNum = 44;
	//1、括号法
	Person p1;//无参(默认)构造函数
	Person p2(10); //有参构造函数
	Person p3(p2);//拷贝构造函数

	//cout << "p2的年龄为："<<p2.getAge() << endl;
	//cout << "p3的年龄为：" << p3.getAge() << endl;

	//2、显示法
	Person p4;//无参(默认)构造函数
	Person p5 =Person(10);//无参(默认)构造函数
	Person p6 = Person(p5);//拷贝构造函数
	Person(10);//匿名对象：当前行执行结束后系统会立即回收掉匿名对象
	cout << "匿名对象已先销毁" << endl;

	//Person(p6);//不要用拷贝函数初始化匿名对象，编译器默认为：Person(p6); == Person p6; 导致重定义

	//3、隐式转换法
	Person p7 = 10;//等价于Person p7 = Person(10);
	Person p8 = p7;//拷贝构造函数

	return 0;
}