#include<iostream>
#include<string>
#include"point.h"
#include"circle.h"
using namespace std;

//�����ʼ�����������캯��������������

class Person {
private:
	string name;
	string sex;
	int age;

public:
	//���캯��
	Person() {
		cout << "Person���캯������" << endl;
	}
	
	~Person()
	{
		cout << "Person������������" << endl;
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