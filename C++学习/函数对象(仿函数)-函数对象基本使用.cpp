#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
using namespace std;
//函数对象基本使用
//概念：重载函数条用操作符()的类，其对象常称为函数对象
//      函数对象使用重载的()时，行为类似函数调用，也叫仿函数
//本质：函数对象(仿函数)是一个类不是一个函数

class MyAdd {
public:
	MyAdd() {
		this->count = 0;
	}

	int operator()(int v1,int v2) {
		this->count++;//统计函数对象调用次数
		return v1 + v2;	
	}

public:
	int count;
};

void doPrint(MyAdd &ma,int v1,int v2) {
	cout << ma(v1, v2) << endl;
}


int main138() {
	int mainNum = 138;
	//函数对象特点：
	//1、函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
	MyAdd myadd;
	cout << myadd(2,3)<<endl;
	cout << MyAdd()(2, 3)<< endl;

	//2、函数对象超出普通函数的概念，函数对象可以有自己的状态
	cout << myadd(2, 3) << endl;
	cout << myadd.count << endl;//利用成员变量统计函数对象调用次数，统计普通函数调用次数的话一般用全局变量或静态变量，这就体现了函数对象可以有自己的状态
	
	//3、函数对象可以作为参数传递
	doPrint(myadd, 2, 3);

	return 0;
}