#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//��ͨ�����뺯��ģ��ĵ��ù���
//1���������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
//2������ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//3������ģ��Ҳ���Է�������
//4���������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

//��ʵ�ʿ����м�Ȼ�ṩ�˺���ģ�壬��þͲ�Ҫ�ṩ��ͨ�������������׳��ֶ�����

//��ͨ����
void myPrint01(int a, int b) {
	cout << "���õ���ͨ����" << endl;
}

//����ģ��
template<typename T>
void myPrint01(T a, T b) {
	cout << "���õ�ģ��" << endl;
}

//����ģ������
template<typename T>
void myPrint01(T a, T b,T c) {
	cout << "�������ص�ģ��" << endl;
}

int main83() {
	int mainNum = 83;
	int a = 10;
	int b = 20;
	char c1 = 'a';
	char c2 = 'a';
	myPrint01(a, b);//������ͨ����
	myPrint01<>(a, b);//���ú���ģ��
	myPrint01(a, b,100);//�������صĺ���ģ��
	myPrint01(c1, c2);//���ȵ��ÿ��Բ�������ƥ��ĺ���ģ��
	return 0;
}