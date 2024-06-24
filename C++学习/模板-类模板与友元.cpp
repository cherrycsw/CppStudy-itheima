#include<iostream>
#include<string>
using namespace std;
//1、让编译器知道Person008类
template<class T1, class T2>
class Person008;

//2、让编译器知道有printPerson5这个函数模板存在
template<class T1, class T2>
void printPerson5(Person008<T1, T2> p) {
	cout << "类外实现" << endl;
	cout << p.name << endl;
	cout << p.age << endl;
}

//通过全局函数 打印Person信息
template<class T1,class T2>
class Person008 {

	//全局函数类内实现(建议使用)
	friend void printPerson1(Person008<T1,T2> p) {
		cout << "类内实现"<< endl;
		cout << p.name << endl;
		cout << p.age << endl;
	}

	//3、全局函数类外实现 得加空参数列表
	friend void printPerson5<>(Person008<T1, T2> p);

public:
	Person008(T1 name,T2 age) {
		this->name = name;
		this->age = age;
	}

private:
	T1 name;
	T2 age;
};



int main92() {
	int mainNum = 92;
	Person008<string,int> p("张三",12);
	printPerson1(p);
	printPerson5(p);
	return 0;

}