#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
//set���� - �Զ�����������ָ���������    ע�⣺�Զ����������ͱ���ָ���������
//set����Ĭ���������Ϊ����С����������θı�������� ��Ҫ���������÷º���
class Personn1 {
public:
	string name;
	int age;
public:
	Personn1(string name,int age) {
		this->name = name;
		this ->age = age;
	}
};

class MyCompare4 {
public:
	bool operator()(const Personn1 &p1, const Personn1 &p2) {
		return p1.age < p2.age;
	}
};

int main133() {
	int mainNum = 133;
	Personn1 p1("����", 16);
	Personn1 p2("����", 20);
	Personn1 p3("����", 12);
	Personn1 p4("����", 55);
	Personn1 p5("����", 44);
	//ָ���������Ϊ���������С����
	set<Personn1,MyCompare4> s1;
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	s1.insert(p5);
	for (set<Personn1, MyCompare4>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << "������"<<(*it).name << "  ���䣺" << (*it).age<< endl;
	}

	return 0;
}