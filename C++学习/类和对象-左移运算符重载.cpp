#include<iostream>
#include<string>
using namespace std;
//�������������

class Person {
public:
	int m_A;
	int m_B;

public:

	//1����Ա���������������ƺ�

	/*
	void operator<<(cout)
	p.operator<<(cout) �򻯰汾 p<<cout
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

//2��ȫ�ֺ����������������
//void operator<<(ostream &cout, Person &p) {
//	cout << "m_A=" << p.m_A << "  m_B=" << p.m_B;
//	//return cout;
//}��endl�������ʽ���˼��
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