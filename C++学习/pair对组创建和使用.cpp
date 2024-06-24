#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
//pair对组使用


int main131() {
	int mainNum = 131;
	pair<string, int> p1("Tom", 20);//第一种创建方式
	cout << "姓名：" <<p1.first << " 年龄：" << p1.second <<endl;

	pair<string, int> p2=make_pair("Jerry", 10);//第二种创建方式
	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;

	//统计没有意义

	return 0;
}