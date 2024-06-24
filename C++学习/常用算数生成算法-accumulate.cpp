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
//常用算数生成算法accumulate 算数生成算法属于小型算法，使用时要包含头文件#include<numeric>
//accumulate  计算区间内容器元素累计总和
//fill        向容器中添加元素

int main159() {
	int mainNum = 159;
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	int total=accumulate(v1.begin(), v1.end(),0);//累加算法 0表示起始的累加值 total最后的结果=v1容器中所有元素值之和+0
	cout << total << endl;
	return 0;
}