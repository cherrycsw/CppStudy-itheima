#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//普通函数与模板函数的区别：
//1、普通函数调用时可以发生隐式类型转换
//2、模板函数用自动类型推导，不可以发生隐式类型转换
//3、函数模板用显示指定类型，可以发生隐式类型转换


//普通函数
int myAdd01(int a, int b) {
	return a + b;
}

//交函数模板
template<typename T>
int myAdd02(T a, T b) {
	return a + b;
}

int main82() {
	int mainNum = 82;
	int a = 10;
	int b = 20;
	char c = 'c';
	myAdd01(a,b);//可以
	myAdd01(a, c);//也可以，发生隐式类型转换
	//myAdd02(a, c);//不行，自动类型推到出错，不能发生隐式类型转换
	myAdd02<int>(a, c);//可以，显示指定类型，可以发生隐式类型转换
	return 0;
}