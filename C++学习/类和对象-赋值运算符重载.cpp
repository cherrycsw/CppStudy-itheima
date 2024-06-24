#include<iostream>
#include<string>
using namespace std;
//赋值运算符重载

class Person4 {
	/*friend MyInteger &operator++(MyInteger &myint);
	friend ostream &operator<<(ostream &cout, MyInteger myint);
	friend MyInteger operator++(MyInteger &myint, int);*/

public:
	int *m_Age;

public:
	//构造函数
	Person4(int age) {
		m_Age = new int(age);
	}

	////深拷贝构造函数
	//Person3(Person3 &p) {
	//	//m_Age = p.m_Age;
	//	m_Age = new int(*p.m_Age);
	//}
	

	
	~Person4() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}

	//重载赋值运算符
	Person4 &operator=(Person4 &p) {
		//编译器是提供浅拷贝赋值 导致堆区内存重复释放
		//m_Age = p.m_Age;

		//应该先判断是否由属性在堆区，如果有先释放干净，然后再深拷贝
		if (m_Age!=NULL)
		{
			delete m_Age;
			m_Age =NULL;
		}		
		//深拷贝
		m_Age = new int(*p.m_Age);
		return *this;
	}

};



int main60() {
	int mainNum = 60;
	Person4 p1(18);
	Person4 p2(20);
	Person4 p3(30);
	p1=p2 = p3;
	cout << *p1.m_Age << endl;
	cout << *p2.m_Age << endl;

	return 0;
}