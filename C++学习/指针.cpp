#include<iostream>
using namespace std;

int main20() {
	int a = 10;
	int b = 20;
	int* p;

	cout << sizeof(p) << endl;
	cout << (int)&p << endl;

	cout << &a << endl;
	p = &a;
	cout << p << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(a) << endl;
	cout << *p<< endl;
	
	
	*p = b;
	cout << *p<< endl;
	cout << a << endl;
	
	cout <<"_____________________________________"<< endl;
	//ָ����ռ�ռ��С
	cout << sizeof(short*) << endl;
	cout <<sizeof(int*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(long*) << endl;
	//���ۣ�x86(32λ)��ռ�ռ䶼Ϊ4�ֽڣ�64λ��ռ�ռ䶼Ϊ8�ֽ�
	

	cout << "_____________________________________" << endl;
	//��ָ��
	int* p2 = NULL;
	//*p2 = 100;
	//���ۣ���ָ���ǲ��ܽ��з��ʵģ���Ϊ��ָ��ָ������ڴ��0�ŵ�ַ��0-255�ŵ�ַ����ϵͳռ�õĵ�ַ������˽�з���

	cout << "_____________________________________" << endl;
	//Ұָ��
	int* p3 = (int*)0x1100;
	//cout << *p3 << endl;

	cout << "_____________________________________" << endl;
	//const����ָ��
		//1.const����ָ�롪����ָ��
	int a1 = 10;
	int b1 = 20;
	const int* p4 = &a1;
	//*p4 = 20;//����
	p4 = &b1;//��ȷ
		//�ص㣺ָ���ָ������޸ģ�����ָ��ָ���ֵ�������޸�

		//2.const���γ�����ָ�볣��
	int* const p5 = &a1;
	* p5 = 20;//��ȷ
	//p5 = &b1;//����
		//�ص㣺ָ���ָ�򲻿����޸ģ�����ָ��ָ���ֵ�����޸�
	return 0;
}