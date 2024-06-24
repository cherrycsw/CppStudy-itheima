#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//类模板的对象做函数的参数

template<class T1,class T2>//类模板
class Person005 {
public:
	T1 m_Name;
	T2 m_Age;

public:
	Person005(T1 name,T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson() {
		cout << "姓名："<<this->m_Name<<"年龄："<<this->m_Age<<endl;
	}

};

//1、指定传入类型(常用)
void printPerson1(Person005<string,int> &p) {
	p.showPerson();
}

//2、参数模板化
template<typename T1, typename T2>
void printPerson2(Person005<T1,T2> &p) {
	p.showPerson();
	cout << "T1的类型为：" << typeid(T1).name() << endl;
	cout << "T2的类型为：" << typeid(T2).name() << endl;
}

//3、将整个类模板化
template<typename T>
void printPerson3(T &p) {
	p.showPerson();
	cout << "T的类型为：" << typeid(T).name() << endl;
}
int main88() {
	int mainNum = 88;
	Person005<string, int> p1("孙悟空",33);
	printPerson1(p1);
	Person005<string, int> p2("猪八戒", 44);
	printPerson2(p2);

	Person005<string, int> p3("唐僧", 55);
	printPerson3(p3);

	return 0;

}