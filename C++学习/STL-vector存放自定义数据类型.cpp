#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Person0020 {
public:
	Person0020(string name,int age) {
		this->name = name;
		this->age = age;
	}
public:
	string name;
	int age;

};

void printPerson1(Person0020 &p) {
	cout << "������" <<p.name<<"\t���䣺"<<p.age<< endl;
}
void printPerson2(Person0020* &p) {
	cout << "������" << (*p).name << "\t���䣺" << (*p).age << endl;
}

int main95() {
	int mainNum = 95;
	//����Զ�����������
	vector<Person0020> per1;
	Person0020 p1("����",10);
	Person0020 p2("����", 20);
	Person0020 p3("����", 30);
	Person0020 p4("����", 40);
	
	per1.push_back(p1);
	per1.push_back(p2);
	per1.push_back(p3);
	per1.push_back(p4);

	for_each(per1.begin(), per1.end(), printPerson1);
	
	//����Զ�����������ָ��
	vector<Person0020*> per2;
	
	per2.push_back(&p1);
	per2.push_back(&p2);
	per2.push_back(&p3);
	per2.push_back(&p4);
	
	vector<Person0020*>::iterator itB1 = per2.begin();
	vector<Person0020*>::iterator itB2 = per2.begin();
	vector<Person0020*>::iterator itE = per2.end();
	for (; itB1 != itE;itB1++) {
		cout << "������"<<(*itB1)->name<<"\t���䣺"<< (*itB1)->age<< endl;
	}
	for_each(itB2,itE, printPerson2);
	return 0;
}