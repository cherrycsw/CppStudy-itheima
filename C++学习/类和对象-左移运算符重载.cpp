#include<iostream>
#include<string>
using namespace std;
//左移运算符重载

class Person {
public:
	int m_A;
	int m_B;

public:

	//1、成员函数不能重载左移号

	/*
	void operator<<(cout)
	p.operator<<(cout) 简化版本 p<<cout
	*/

	/*Person operator+(Person &p) {
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/
	Person(int a, int b) {
		m_A = a;
		m_B = b;
	}
};

//2、全局函数重载左移运算符
//void operator<<(ostream &cout, Person &p) {
//	cout << "m_A=" << p.m_A << "  m_B=" << p.m_B;
//	//return cout;
//}加endl会出错！链式编程思想
ostream &operator<<(ostream &cout, Person &p) {
	cout << "m_A=" << p.m_A << "  m_B=" << p.m_B;
	return cout;
}

int main58() {
	int mainNum = 58;
	Person p(10,11);
	
	cout <<p<<endl;


	return 0;

}