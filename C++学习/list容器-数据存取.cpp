#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//list容器数据存取


int main125() {
	int mainNum = 125;
	list<int> L1;//默认构造
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	//不能用[]访问list容器中的元素 原因是list本质是链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问的
	//cout << L1[1] <<endl;
	cout << L1.front() << endl;
	cout << L1.back() << endl;
	

	return 0;
}