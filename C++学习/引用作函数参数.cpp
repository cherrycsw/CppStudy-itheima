#include<iostream>
#include<string>
using namespace std;

//1、值传递
void swap01(int a,int b) {
	int tmp = b;
	b = a;
	a = tmp;
}

//2、地址传递
void swap02(int *a, int *b) {
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

//3、引用传递
void swap03(int &a, int &b) {
	int tmp = b;
	b = a;
	a = tmp;
}
//4、指针常量传递
void swap04(int * const a, int * const b) {
	int tmp = *b;
	*b = *a;
	*a = tmp;
}


int main34() {
	int mainNum = 34;

	int a = 10;
	int b = 20;
	cout << "swap1交换前：a=" << a << " b=" << b << endl;
	swap01(a,b);
	cout << "swap1交换后：a=" << a << " b=" << b << endl;

	a = 10;
	b = 20;
	cout << "swap2交换前：a=" << a << " b=" << b << endl;
	swap02(&a, &b);
	cout << "swap2交换后：a=" << a << " b=" << b << endl;

	a = 10;
	b = 20;
	cout << "swap3交换前：a=" << a << " b=" << b << endl;
	swap03(a, b);
	cout << "swap3交换后：a=" << a << " b=" << b << endl;

	a = 10;
	b = 20;
	cout << "swap4交换前：a=" << a << " b=" << b << endl;
	swap04(&a, &b);
	cout << "swap4交换后：a=" << a << " b=" << b << endl;
	return 0;
}