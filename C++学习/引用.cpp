#include<iostream>
#include<string>
using namespace std;



int main33() {
	//����
	int a = 10;
	int b = 20;
	//int &c;//����ʾ�������ñ���ó�ʼ��
	int &c = a;
	int &d = a;
	//int &c = b;//����ʾ��������һ����ʼ����Ͳ����Ը����ˣ�����һ��ָ�볣�������ݿ��Ըı䣬��ַ���ܱ�
	cout << d << endl;
	cout << &d << endl;
	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;
	c = b;//��ֵ�����������Ǹ�������
	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;
	cout << c << endl;
	cout << a << endl;
	int *p = &a;
	p = &b;
	cout << *p << endl;
	return 0;
}