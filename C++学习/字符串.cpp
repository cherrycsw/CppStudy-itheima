#include<iostream>
#include<string>
using namespace std;

int main4() {
	//C风格字符串
	char str1[] = "hello world";
	cout << str1 << endl;

	//C++风格字符串
	string str2 = "hello world2";
	cout << str2 << endl;

	double a = 10;
	double b = 3;
	cout << a/b<< endl;

	int c = 10;
	int d = c+++10;
	cout << c << endl;
	cout << d << endl;
	cout << (d&&d )<< endl;
	return 0;
}