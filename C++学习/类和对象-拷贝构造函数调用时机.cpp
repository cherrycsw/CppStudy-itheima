#include<iostream>
#include<string>
#include"point.h"
#include"circle.h"
using namespace std;

//�������캯������ʱ��

class Person {
private:
	string p_name;
	string p_sex;
	int p_age;

public:
	//�޲�(Ĭ��)���캯��
	Person() {
		cout << "Person�޲�(Ĭ��)���캯������" << endl;
	}
	//�вι��캯��
	Person(int age) {
		p_age = age;
		cout << "Person�вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person &p) {
		//�������������������Կ�����������
		p_age = p.p_age;
		cout << "Person�������캯������" << endl;
	}

	int getAge() {
		return p_age;
	}

	~Person()
	{
		cout << "Person������������" << endl;
	}
};

void doWork1(Person p) {

}

Person doWork2() {
	Person p4;
	cout << &p4 << endl;
	return p4;
}

//����
int main45() {
	int mainNum = 45;
	//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
	Person p1(20);
	Person p2(p1);
	cout << "p2�����䣺"<<p2.getAge() << endl;

	//2��ֵ���ݵķ�ʽ������������ֵ
	Person p3;
	doWork1(p3);//�൱��Person p=p3;��ʽ���ÿ������캯��

	//3��ֵ��ʽ���ؾֲ�����
	cout << &doWork2() << endl;
	return 0;
}