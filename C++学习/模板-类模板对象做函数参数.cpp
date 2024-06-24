#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//��ģ��Ķ����������Ĳ���

template<class T1,class T2>//��ģ��
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
		cout << "������"<<this->m_Name<<"���䣺"<<this->m_Age<<endl;
	}

};

//1��ָ����������(����)
void printPerson1(Person005<string,int> &p) {
	p.showPerson();
}

//2������ģ�廯
template<typename T1, typename T2>
void printPerson2(Person005<T1,T2> &p) {
	p.showPerson();
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}

//3����������ģ�廯
template<typename T>
void printPerson3(T &p) {
	p.showPerson();
	cout << "T������Ϊ��" << typeid(T).name() << endl;
}
int main88() {
	int mainNum = 88;
	Person005<string, int> p1("�����",33);
	printPerson1(p1);
	Person005<string, int> p2("��˽�", 44);
	printPerson2(p2);

	Person005<string, int> p3("��ɮ", 55);
	printPerson3(p3);

	return 0;

}