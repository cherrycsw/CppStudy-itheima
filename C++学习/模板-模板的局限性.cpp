#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//ģ��ľ����ԣ�
//ģ�岻�����ܵģ���Щ�ض�����������Ҫ���廯��ʽ������ʵ��

class Person001 {
public:
	Person001(string name,int age) {
		this->name = name;
		this->age = age;
	}
	//���������
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

//����ģ��
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

//���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
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
		cout << "a����b" << endl;
	}
	else {
		cout << "a������b" << endl;
	}
	Person001 p1("����",18);
	Person001 p2("����", 20);
	Person001 p3("����", 20);
	bool ret2 = myCompare(p1, p2);
	if (ret2) {
		cout << "p1����p2" << endl;
	}
	else {
		cout << "p1������p2" << endl;
	}

	bool ret3 = myCompare(p2, p3);
	if (ret3) {
		cout << "p2����p3" << endl;
	}
	else {
		cout << "p2������p3" << endl;
	}

	return 0;
}