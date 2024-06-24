#include<iostream>
#include<string>
using namespace std;

//1��ֵ����
void swap01(int a,int b) {
	int tmp = b;
	b = a;
	a = tmp;
}

//2����ַ����
void swap02(int *a, int *b) {
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

//3�����ô���
void swap03(int &a, int &b) {
	int tmp = b;
	b = a;
	a = tmp;
}
//4��ָ�볣������
void swap04(int * const a, int * const b) {
	int tmp = *b;
	*b = *a;
	*a = tmp;
}


int main34() {
	int mainNum = 34;

	int a = 10;
	int b = 20;
	cout << "swap1����ǰ��a=" << a << " b=" << b << endl;
	swap01(a,b);
	cout << "swap1������a=" << a << " b=" << b << endl;

	a = 10;
	b = 20;
	cout << "swap2����ǰ��a=" << a << " b=" << b << endl;
	swap02(&a, &b);
	cout << "swap2������a=" << a << " b=" << b << endl;

	a = 10;
	b = 20;
	cout << "swap3����ǰ��a=" << a << " b=" << b << endl;
	swap03(a, b);
	cout << "swap3������a=" << a << " b=" << b << endl;

	a = 10;
	b = 20;
	cout << "swap4����ǰ��a=" << a << " b=" << b << endl;
	swap04(&a, &b);
	cout << "swap4������a=" << a << " b=" << b << endl;
	return 0;
}