#include<iostream>
#include<string>
using namespace std;
//关系运算符重载 ==和!=

class Person5 {

public:
	string m_Name;
	int m_Age;

public:
	//构造函数
	Person5(string name,int age) {
		m_Name = name;
		m_Age = age;
	}


	//重载关系运算符==
	bool operator==(Person5 &p) {
		if (p.m_Age==m_Age&&p.m_Name==m_Name) {
			return true;
		}
		else
			return false;
	}

	//重载关系运算符!=
	bool operator!=(Person5 &p) {
		if (p.m_Age != m_Age || p.m_Name != m_Name) {
			return true;
		}
		else
			return false;
	}
	
};



int main61() {
	int mainNum = 61;
	Person5 p1("张三",18);
	Person5 p2("张三", 18);
	if (p1 == p2) {
		cout << "p1==p2" << endl;
	}
	else
		cout << "p1!=p2" << endl;

	Person5 p3("李四", 18);
	Person5 p4("李四", 19);
	if (p3 != p4) {
		cout << "p3!=p4" << endl;
	}
	else
		cout << "p3==p4" << endl;

	//cout << p1.m_Name << endl;
	//cout << p1.m_Age << endl;

	return 0;
}