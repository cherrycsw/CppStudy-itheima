#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
#include<numeric>

using namespace std;
//常用集合算法：
//set_intersection 求两个容器(可以是vector容器 但必须有序 最好不要重复)的交集  返回目标容器中交集最后位置下一个元素的迭代器
//set_union        求两个容器的并集
//set_difference   求两个容器的差集 v1-v2：在v1中而不在v2中

int main163() {
	int mainNum = 163;
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	v1.push_back(9);
	v1.push_back(9);
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v2.push_back(i + 5);
	}
	for_each(v2.begin(), v2.end(), [](int v) {cout << v << " "; });
	cout << endl;
	vector<int> v3;
	//获取差集 在v1中而不在v2中
	v3.resize(v1.size());
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), v3.end(), [](int v) {cout << v << " "; });//不要用v3,end() 因为打印出来的会有补充的0元素
	cout << endl;
	for_each(v3.begin(), itEnd, [](int v) {cout << v << " "; });
	cout << endl;

	//获取差集 在v2中而不在v1中
	vector<int> v4;
	v4.resize(v2.size());
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v4.begin());
	for_each(v4.begin(), v4.end(), [](int v) {cout << v << " "; });//不要用v4,end() 因为打印出来的会有补充的0元素
	cout << endl;
	for_each(v4.begin(), itEnd, [](int v) {cout << v << " "; });
	cout << endl;
	return 0;
}