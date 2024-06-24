#include<iostream>
#include<string>
using namespace std;
/*
程序执行前：
代码区：存放代码和程序指令二进制，由操作系统管理   特点：共享（打开多个相同程序窗口时公用一个代码区）、只读
全局区：存放全局变量、静态变量、字符串常量、全局常量，数据在程序结束时由操作释放

程序执行后：
栈区：由存放函数的参数值、局部变量、局部常量等，由编译器自动分配释放，不能return局部常量的地址（函数执行完后就会释放，编译器虽然可以保留一次）
堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收

内存四区存在意义：不同区域存放的数据，赋予不同的生命周期，给我们更大的灵活编程
*/


//全局变量
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int * func() {
	//栈区中的局部变量
	//int m = 20;
	//return &m;

	//利用new关键字将数据开辟到堆区，也就是堆区中的局部变量
	int * n = new int(30);//返回初始化为30数据的地址
	return n;
}

int main31() {
	//普通局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量："<< endl;
	cout << (int)&a << endl;
	cout << (int)&a << endl;

	//全局变量
	cout << "全局变量：" << endl;
	cout << (int)&g_a << endl;
	cout << (int)&g_b << endl;

	//静态变量
	cout << "静态变量：" << endl;
	static int s_a = 10;
	static int s_b = 10;
	cout << (int)&s_a << endl;
	cout << (int)&s_b << endl;

	//常量--字符串常量
	//string str1 = "你好";
	//string str2 = "你好";错误定义
	cout << "字符串常量：" << endl;
	cout << (int)&"你好"<< endl;
	cout << (int)&"你好" << endl;

	//常量--全局常量
	cout << "全局常量：" << endl;
	cout << (int)&c_g_a << endl;
	cout << (int)&c_g_b << endl;

	//常量--局部常量
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量：" << endl;
	cout << (int)&c_l_a << endl;
	cout << (int)&c_l_b << endl;

	//栈区局部变量地址返回实验
	//int * p = func();
	//cout << *p << endl;//函数执行完栈中的数据就会被释放，第一次可以打印正确的数字，是因为编译器做了保留
	//cout << *p << endl;//第二次不做保留 

	//在堆区开辟数据
	int * p = func();
	cout << *p << endl;
	cout << *p << endl;//因为堆区没有被程序员释放，第二次依然保留 

	
	return 0;
}