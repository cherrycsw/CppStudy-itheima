#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
//set容器查找和统计
//find(key);  查找key是否存在，若存在，返回该元素位置的迭代器；若不存在，则返回尾部迭代器：set.end()


int main129() {
	int mainNum = 129;
	set<int> s;
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(40);

	set<int>::iterator pos = s.find(30);
	if (pos!=s.end()) {//判断是否查找成功
		cout << "找到元素" << endl;
	}
	else {
		cout << "未找到元素" << endl;
	}

	//统计没有意义

	return 0;
}