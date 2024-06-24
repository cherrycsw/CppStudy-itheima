#include<iostream>
#include<string>
#include"point.h"
#include"circle.h"
using namespace std;

//对象初始化和清理（构造函数、析构函数）

class Person {
private:
	string name;
	string sex;
	int age;

public:
	//构造函数
	Person() {
		cout << "Person构造函数调用" << endl;
	}
	
	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}
};

void testt() {
	Person a;
}

int main43() {
	int mainNum = 43;
	
	
	Person p;
	testt();
	return 0;
}