#include<iostream>
#include<string>
using namespace std;

int * function() {
	int *p = new int(10);//�����ֶ������ڴ�
	return p;
}

void test1() {
	int *p = function();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << p << endl;
	delete p;//�����ֶ��ͷ��ڴ�
	cout << p << endl;
	cout << *p << endl;
}

//new����
void test2() {
	int * arr=new int[10];//10����������10��Ԫ��
	for (int i = 0; i < 10;i++) {
		 arr[i]=i+100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;//�ͷ���������

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	
}

int main32() {
	//��ά����
	test1();
	test2();
	return 0;
}