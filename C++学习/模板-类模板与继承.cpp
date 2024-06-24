#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//类模板与继承，当类模板碰到继承时需要注意一下几点：
//1、当子类继承的父类是一个类模板时，子类在声明的时候，要指出父类中T的类型,如果不指定，编译器无法给子类分配内存
//2、如果想灵活指定出父类中T的类型，子类也需要变为类模板

template<class T>//Base类模板
class Base {
public:
	T m;

};

//1、当子类继承的父类是一个类模板时，子类在声明的时候，要指出父类中T的类型
class Son1 :public Base<int> {//必须指出父类中T的类型，不然报错

};

//2、如果想灵活指定出父类中T的类型，子类也需要变为类模板
template<class T1,class T2>//Son类模板
class Son2 :public Base<T2> {
public:
	Son2() {
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}
public:
	T1 obj;
};

int main89() {
	int mainNum = 89;
	Son2<int ,char> s2;

	return 0;

}