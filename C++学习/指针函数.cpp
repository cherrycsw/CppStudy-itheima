#include<iostream>
#include<string>
using namespace std;

void swap1(int a,int b) {
	int tmp = b;
	b = a;
	a = tmp;
	cout << "swap1函数中 a=" << a << endl;
	cout << "swap1函数中 b=" << b << endl;
}

void swap2(int *a, int *b) {
	//地址交换 不能实现
	//int *tmp = b;
	//b = a;
	//a = tmp;

	//数值交换
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

int main22() {
	int a = 10;
	int b = 20;
	swap2(&a,&b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;
}