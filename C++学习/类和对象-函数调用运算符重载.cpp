#include<iostream>
#include<string>
using namespace std;
//函数调用运算符重载()
//重载后的函数叫做仿函数
//仿函数非常灵活,没有固定写法
class Myprint{
public:

	//重载函数调用运算符()
	void operator()(string text) {
		cout << text << endl;
	}


};

void print2(string text) {
	cout << text << endl;
}


int main62() {
	int mainNum = 62;
	Myprint print;
	//print()"hello";违法
	print("hello1");//由于使用起来非常类似于函数调用,因此称为仿函数
	print2("hello2");

	//匿名对象调用
	Myprint()("hello3");
	

	return 0;
}