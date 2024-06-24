#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//模板的局限性：
//模板不是万能的，有些特定数据类型需要具体化方式做特殊实现

class Person001 {
public:
	Person001(string name,int age) {
		this->name = name;
		this->age = age;
	}
	//运算符重载
	/*bool operator==(Person001 &p) {
		if (this->age == p.age&&this->name==p.name) {
			return true;
		}else{
			return false;
		}
	}*/
		
public:
	string name;
	int age;
};

//函数模板
template<typename T>
bool myCompare(T &a, T &b) {
	cout << "bool myCompare(T &a, T &b)" << endl;
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}

//利用具体化Person的版本实现代码，具体化优先调用
template<> bool myCompare(Person001 &a, Person001 &b) {
	cout << "template<> bool myCompare(Person001 &a, Person001 &b)" << endl;
	if (a.name == b.name&&a.age == b.age) {
		return true;
	}
	else {
		return false;
	}
}

int main84() {
	int mainNum = 84;
	int a = 10;
	int b = 20;
	char c1 = 'a';
	char c2 = 'a';
	bool ret1 = myCompare(a,b);
	if (ret1) {
		cout << "a等于b" << endl;
	}
	else {
		cout << "a不等于b" << endl;
	}
	Person001 p1("张三",18);
	Person001 p2("李四", 20);
	Person001 p3("李四", 20);
	bool ret2 = myCompare(p1, p2);
	if (ret2) {
		cout << "p1等于p2" << endl;
	}
	else {
		cout << "p1不等于p2" << endl;
	}

	bool ret3 = myCompare(p2, p3);
	if (ret3) {
		cout << "p2等于p3" << endl;
	}
	else {
		cout << "p2不等于p3" << endl;
	}

	return 0;
}