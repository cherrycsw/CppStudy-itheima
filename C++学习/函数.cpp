#include<iostream>
using namespace std;

int A, B;
int add(int a,int b) {
	int sum = a + b;
	return sum;
}

/*void swap(int num1, int num2) {
	int tmp = num2;
	num2 = num1;
	num1 = tmp;
	A = num1;
	B = num2;
}*/

int main18() {
	A=10, B=20;
	/*cout << "������Ҫ��ӵ�����" << endl;
	cin >> A;
	cin >> B;*/	cout << "A��B����ǰ��ֵΪ��A="<<A<<" B="<<B<< endl;
	swap(A, B);

	cout << "A��B�������ֵΪ��A=" << A << " B=" << B << endl;

	cout << "��ӵĽ��Ϊ��"<<add(A,B) << endl;
	
	return 0;
}