#include<iostream>
#include<string>
#include"point.h"
#include"circle.h"
using namespace std;

//���캯�����ù���


class Person1 {
private:
	string p_name;
	string p_sex;
	int p_age;

public:
	
	////�вι��캯��
	//Person1(int age) {
	//	p_age = age;
	//	cout << "Person1�вι��캯������" << endl;
	//}

	//�������캯��
	Person1(const Person1 &p) {
		p_age = p.p_age;
		cout << "Person1�������캯������" << endl;
	}

	//��������
	~Person1()
	{
		cout << "Person1������������" << endl;
	}

	int getAge() {
		return p_age;
	}
};

int main46() {
	int mainNum = 46;
	//1������һ���࣬C++���������ÿ���඼�������3������
	//Ĭ�Ϲ���(��ʵ��)
	//��������(��ʵ��)
	//��������(ֵ����)
	//Person1 p1(18);
	//Person1 p2(p1); 
	//cout << p2.getAge()<< endl;

	//2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
	//Person1 p3;//���� û��Ĭ�Ϲ��캯��
	//Person1 p4(10);
	//Person1 p5(p4);
	//cout << p5.getAge() << endl;

	//3���������д�˿������캯�����������Ͳ����ṩ������ͨ���캯����
	//Person1 p6;//���� û��Ĭ�Ϲ��캯��
	//Person1 p7(10);//���� û���вι��캯��

	return 0;

} 