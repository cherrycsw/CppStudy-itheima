#include<iostream>
#include<string>
using namespace std;

//�������أ������ú�������ͬ����߸�����
//����������������
//1��ͬһ����������
//2������������ͬ
//3�������������Ͳ�ͬ��������ͬ��˳��ͬ
//ע�⣺�����ķ���ֵ��������Ϊ�������ص�����
void funct() {
	cout << "����funct()����" << endl;
}

void funct(int a) {
	cout << "����funct(int a)����" << endl;
}

void funct(double a) {
	cout << "����funct(double a)����" << endl;
}

void funct(int a, double b) {
	cout << "����funct(int a, double b)����" << endl;
}

void funct(double a, int b ) {
	cout << "����funct(double a, int b)����" << endl;
}

//int funct(double a, int b) {
//	cout << "����funct(double a, int b)����" << endl;
//	return 1;
//}

//����������������
void funct(char &a) {
	cout << "����funct(char &a)����" << endl;
}

void funct(const char &a) {
	cout << "����funct(const char &a)����" << endl;
}

//������������Ĭ�ϲ���
//void funct(int a,int b=10) {
//	cout << "����funct(int a,int b=10)����" << endl;
//}
//��������



int main37() {
	int mainNum = 37;
	funct();
	funct(10);
	funct(3.14);
	funct(10, 3.14);
	funct(3.14, 10);

	char a = 'a';
	funct(a);
	funct('a');
	return 0;
}