#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//list��������������Person�Զ����������ͽ�������Person�������������䡢���
//������򣺰�����������������������ͬ������߽��н���

class Person021 {
public:
	string name;
	int age;
	int height;
public:
	Person021(string name,int age,int height) {
		this->name = name;
		this->age = age;
		this->height = height;
	}
};

void printPerson021(const Person021 &p) {
	cout << "������"<<p.name<<"\t���䣺"<<p.age<<"\t��ߣ�"<<p.height << endl;
}

bool myCompare1(const Person021 &p1, const Person021 &p2) {
	if (p1.age != p2.age) {
		return p1.age<p2.age;
	}
	else {
		return p1.height > p2.height;
	}
	
}

int main127() {
	int mainNum = 127;
	list<Person021> L;
	Person021 p1("����",18,170);
	Person021 p2("����", 19, 172);
	Person021 p3("����", 16, 180);
	Person021 p4("����", 20, 175);
	Person021 p5("����", 19, 175);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	cout << "����ǰ��" << endl;
	//����
	for_each(L.begin(),L.end(),printPerson021);
	L.sort(myCompare1);
	cout << "�����" << endl;
	//����
	for_each(L.begin(), L.end(), printPerson021);

	return 0;
}