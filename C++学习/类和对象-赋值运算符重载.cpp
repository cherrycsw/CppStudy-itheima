#include<iostream>
#include<string>
using namespace std;
//��ֵ���������

class Person4 {
	/*friend MyInteger &operator++(MyInteger &myint);
	friend ostream &operator<<(ostream &cout, MyInteger myint);
	friend MyInteger operator++(MyInteger &myint, int);*/

public:
	int *m_Age;

public:
	//���캯��
	Person4(int age) {
		m_Age = new int(age);
	}

	////������캯��
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

	//���ظ�ֵ�����
	Person4 &operator=(Person4 &p) {
		//���������ṩǳ������ֵ ���¶����ڴ��ظ��ͷ�
		//m_Age = p.m_Age;

		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
		if (m_Age!=NULL)
		{
			delete m_Age;
			m_Age =NULL;
		}		
		//���
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