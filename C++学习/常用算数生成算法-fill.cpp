#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
#include<numeric>

using namespace std;
//常用算数生成算法fill 算数生成算法属于小型算法，使用时要包含头文件#include<numeric>
//accumulate  计算区间内容器元素累计总和
//fill        向容器中添加元素

int main160() {
	int mainNum = 160;
	//内置数据类型
	vector<int> v1;
	v1.resize(10);
	
	//后期重新填充
	fill(v1.begin(), v1.end(), 100);
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	return 0;
}