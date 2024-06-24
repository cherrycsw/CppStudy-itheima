#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//内建函数对象-算数仿函数：STL内建了一些函数对象
//这些仿函数所产生的对象，用法和一般函数完全相同
//使用内建函数对象，需要引入头文件#include<functional>


int main141() {
	int mainNum = 141;
	vector<int> v;
	//negate 一元仿函数 取反仿函数
	negate<int> n;
	cout << n(50) << endl;
	//plus 二元仿函数 加法仿函数
	plus<int> p;
	cout << p(20, 1) << endl;

	return 0;
}