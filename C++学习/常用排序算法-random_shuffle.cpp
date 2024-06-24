#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//常用排序算法random_shuffle:将容器区间内的元素顺序打乱 洗牌算法

int main1533() {
	int mainNum = 1533;
	srand((unsigned int)time(NULL));//随机数种子
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	random_shuffle(v1.begin(),v1.end());
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	return 0;
}