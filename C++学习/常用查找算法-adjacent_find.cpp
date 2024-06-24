#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//常用查找算法adjacent_find 查找相邻重复元素，返回相邻元素的第一个位置的迭代器 否则返回最后一个迭代器


int main148() {
	int mainNum = 148;
	//内置数据类型
	vector<int> v1;
	v1.push_back(0);
	v1.push_back(3);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(1);
	v1.push_back(4);
	v1.push_back(3);
	v1.push_back(3);
	/*vector<int>::iterator pos = v1.begin();
	int count = 0;
	while(pos!=v1.end()){
		pos=adjacent_find(pos, v1.end());
		if (pos != v1.end()) {
			count++;
			pos = pos + 2;
		}
	}*/
	vector<int>::iterator pos= adjacent_find(v1.begin(), v1.end());
	if (pos==v1.end()) {
		cout << "未找到相邻重复元素" << endl;
	}
	else {

		cout << "找到相邻重复元素：" <<*pos<< endl;
	}


	return 0;
}