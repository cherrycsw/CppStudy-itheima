#include<iostream>
#include<string>
using namespace std;

//���һ��Բ�࣬��Բ���ܳ������㹫ʽ=2*PI*�뾶

//Բ����
const double PI = 3.14;

class Circle {

	//����Ȩ��(����Ȩ��)
public:
	//��Ϊ
	double getZC() {  //��ȡԲ���ܳ�
		return 2 * PI*c_r;
	}

public:

	//����
	int c_r;//Բ�İ뾶


};

class Students {
public:
	//��ֵ
	void set(string name, int id) {
		s_name = name;
		s_id = id;
	}

	//��ʾѧ����Ϣ
	void printStudents() {
		cout << "������" << s_name << "  ѧ�ţ�" << s_id<<endl;
	}

public:
	string s_name;
	int s_id;
};

int main38() {
	int mainNum = 38;
	
	Circle cl;
	cl.c_r = 10;
	cout << "Բ���ܳ�Ϊ��" << cl.getZC() << endl;

	Students stu;
	stu.set("����",2022120376);
	stu.printStudents();
	return 0;
}