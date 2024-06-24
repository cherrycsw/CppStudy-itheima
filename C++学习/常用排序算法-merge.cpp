#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//常用排序算法merge:将两个有序的容器合并，并存储到另一容器中 注意被合并的两个容器必须有序
//merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest.beg);

int main153() {
	int mainNum = 153;
	srand((unsigned int)time(NULL));//随机数种子
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v2.push_back(i+5);
	}
	for_each(v2.begin(), v2.end(), [](int v) {cout << v << " "; });
	cout << endl;

	vector<int> v3;
	v3.resize(v1.size()+v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), v3.end(), [](int v) {cout << v << " "; });
	cout << endl;

	return 0;
}