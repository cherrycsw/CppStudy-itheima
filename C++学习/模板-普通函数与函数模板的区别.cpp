#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//��ͨ������ģ�庯��������
//1����ͨ��������ʱ���Է�����ʽ����ת��
//2��ģ�庯�����Զ������Ƶ��������Է�����ʽ����ת��
//3������ģ������ʾָ�����ͣ����Է�����ʽ����ת��


//��ͨ����
int myAdd01(int a, int b) {
	return a + b;
}

//������ģ��
template<typename T>
int myAdd02(T a, T b) {
	return a + b;
}

int main82() {
	int mainNum = 82;
	int a = 10;
	int b = 20;
	char c = 'c';
	myAdd01(a,b);//����
	myAdd01(a, c);//Ҳ���ԣ�������ʽ����ת��
	//myAdd02(a, c);//���У��Զ������Ƶ��������ܷ�����ʽ����ת��
	myAdd02<int>(a, c);//���ԣ���ʾָ�����ͣ����Է�����ʽ����ת��
	return 0;
}