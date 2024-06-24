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
	/*cout << "请输入要相加的数：" << endl;
	cin >> A;
	cin >> B;*/	cout << "A，B交换前的值为：A="<<A<<" B="<<B<< endl;
	swap(A, B);

	cout << "A，B交换后的值为：A=" << A << " B=" << B << endl;

	cout << "相加的结果为："<<add(A,B) << endl;
	
	return 0;
}