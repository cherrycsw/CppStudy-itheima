#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//普通函数与函数模板的调用规则：
//1、如果函数模板和普通函数都可以实现，优先调用普通函数
//2、可以通过空模板参数列表来强制调用函数模板
//3、函数模板也可以发生重载
//4、如果函数模板可以产生更好的匹配，优先调用函数模板

//在实际开发中既然提供了函数模板，最好就不要提供普通函数，否则容易出现二义性

//普通函数
void myPrint01(int a, int b) {
	cout << "调用的普通函数" << endl;
}

//函数模板
template<typename T>
void myPrint01(T a, T b) {
	cout << "调用的模板" << endl;
}

//函数模板重载
template<typename T>
void myPrint01(T a, T b,T c) {
	cout << "调用重载的模板" << endl;
}

int main83() {
	int mainNum = 83;
	int a = 10;
	int b = 20;
	char c1 = 'a';
	char c2 = 'a';
	myPrint01(a, b);//调用普通函数
	myPrint01<>(a, b);//调用函数模板
	myPrint01(a, b,100);//调用重载的函数模板
	myPrint01(c1, c2);//优先调用可以产生更好匹配的函数模板
	return 0;
}