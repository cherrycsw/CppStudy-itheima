#include<iostream>
#include<string>
using namespace std;
//���麯���ͳ�����
//���麯��������ʽ�� virtual ����ֵ���� ������(�����б�)=0
//�����ඨ�壺ֻ����һ�����麯������
//�������ص㣺����ʵ��������

class Base {//������ 
public:
	virtual void func() = 0;//���麯��
	
};

class Son:public Base {
public:
	virtual void func() {
		cout << "func���ຯ������" << endl;
	}
};

int main70() {
	int mainNum = 70;
	//1�������಻��ʵ��������
	//Base cal1;//����
	//new Base;//�����������޷�ʵ��������
	
	//2������������������д�����еĴ��麯��������Ҳ���ڳ�����

	//Son son;//���� �������û��д����Ĵ��麯������ҲΪ������
	Base *base = new Son;
	base->func();
	//cout << "result=" << cal1.getResult("/") << endl;

	return 0;
}