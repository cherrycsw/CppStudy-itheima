#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//常用查找算法binary_search(二分查找法) 查找指定的元素，查到返回true，否则false 注意：在无序序列中不可用


int main149() {
	int mainNum = 149;
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10;i++) {
		v1.push_back(i);
	}
	bool ret = binary_search(v1.begin(), v1.end(), 9);

	if (ret) {
		cout << "找到元素" << endl;
	}
	else {
		cout << "未找到元素" << endl;
	}


	return 0;
}