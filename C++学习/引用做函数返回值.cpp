#include<iostream>
#include<string>
using namespace std;

//��������������ֵ
//1����Ҫ���ؾֲ�����������
int & test01() {
	int a = 10;
	return a;
}

int test02() {
	int b = 10;//�ֲ�����������ջ��
	return b;
}

//2�������ĵ��ÿ�����Ϊ��ֵ
int & test03() {
	static int a = 10;//��̬����������ȫ�����������������ų�������ͷ�
	return a;
}

int main35() {
	int mainNum = 35;

	int &ref1 = test01();
	cout << ref1 << endl;//����������һ��
	cout << ref1 << endl;//����ִ�������ͷžֲ��������ڴ�

	int ref2 = test02();
	cout << ref2 << endl;
	cout << ref2 << endl;

	int &ref3 = test03();
	cout << ref3 << endl;
	cout << ref3 << endl;

	test03() = 1000;//�����ĵ��ÿ�����Ϊ��ֵ
	cout << ref3 << endl;
	cout << ref3 << endl;

	return 0;
}