#include<iostream>
#include<string>
using namespace std;

//��������
//ʹ�ó��������������βΣ���ֹ����� �ͺ���const int * const a=10�� ָ��ָֻ�򲻿��޸ģ�ָ��ָ�������Ҳ�����޸�

void showValue(const int &v) {
	//v = 20;//vֵ�����޸ģ�ֻ���ӡ����ֹ�����
	cout << v << endl;
}

int main36() {
	int mainNum = 36;

	int a = 10;
	//int &ref = 10;//���ò��Ϸ����������úϷ��ڴ�ռ�
	const int &ref = 10;//�Ϸ�������const�󣬱������������޸ģ�int temp=10; const int &ref=temp;
	//ref = 20;//����const���Ϊֻ���������޸�

	showValue(a);
	return 0;
}