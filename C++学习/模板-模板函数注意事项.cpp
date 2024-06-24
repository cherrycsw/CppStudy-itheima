#include<iostream>
#include<string>
using namespace std;

//模板函数注意事项：
//1、自动类型推导，必须推到出一致的数据类型T才可以使用
//2、模板必须要确定出T的数据类型，才可以使用


//函数模板
template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用的数据类型
void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void func() {
	cout << "sfsgs" << endl;
}

int main80() {
	int mainNum = 80;
	int a = 10;
	int b = 20;
	cout << a << endl;
	cout << b << endl;
	mySwap(a, b);//自动类型推导 正确
	cout << a << endl;
	cout << b << endl;
	char c = 'c';

	//1、自动类型推导，必须推到出一致的数据类型T才可以使用
	cout << a << endl;
	cout << c << endl;
	//mySwap(a, c);//报错!类型得一致
	cout << a << endl;
	cout << c << endl;

	//2、模板必须要确定出T的数据类型，才可以使用
	//func();出错
	func<int>();
	return 0;
}