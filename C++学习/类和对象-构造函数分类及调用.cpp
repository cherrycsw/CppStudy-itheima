#include<iostream>
#include<string>
#include"point.h"
#include"circle.h"
using namespace std;

//���캯�����ࣺ�вι��졢�޲ι���
//				�������졢��ͨ����
class Person {
private:
	string name;
	string sex;
	int age;

public:
	//�޲�(Ĭ��)���캯��
	Person() {
		cout << "Person�޲�(Ĭ��)���캯������" << endl;
	}
	//�вι��캯��
	Person(int a) {
		age = a;
		cout << "Person�вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person &p) {
		//�������������������Կ�����������
		age = p.age;
		cout << "Person�������캯������" << endl;
	}

	int getAge() {
		return age;
	}

	~Person()
	{
		cout << "Person������������" << endl;
	}
};

//����
int main44() {
	int mainNum = 44;
	//1�����ŷ�
	Person p1;//�޲�(Ĭ��)���캯��
	Person p2(10); //�вι��캯��
	Person p3(p2);//�������캯��

	//cout << "p2������Ϊ��"<<p2.getAge() << endl;
	//cout << "p3������Ϊ��" << p3.getAge() << endl;

	//2����ʾ��
	Person p4;//�޲�(Ĭ��)���캯��
	Person p5 =Person(10);//�޲�(Ĭ��)���캯��
	Person p6 = Person(p5);//�������캯��
	Person(10);//�������󣺵�ǰ��ִ�н�����ϵͳ���������յ���������
	cout << "����������������" << endl;

	//Person(p6);//��Ҫ�ÿ���������ʼ���������󣬱�����Ĭ��Ϊ��Person(p6); == Person p6; �����ض���

	//3����ʽת����
	Person p7 = 10;//�ȼ���Person p7 = Person(10);
	Person p8 = p7;//�������캯��

	return 0;
}