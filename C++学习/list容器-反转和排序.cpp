#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//list容器反转和排序

void printList5(const list<int> l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1,int v2) {
	return v1 > v2;
}

int main126() {
	int mainNum = 126;
	list<int> L1;
	L1.push_back(40);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(10);
	cout << "反转前：" << endl;
	printList5(L1);

	L1.reverse();//反转
	cout << "反转后：" << endl;
	printList5(L1);

	//排序
	cout << "排序前：" << endl;
	printList5(L1);
	//sort(L1.begin(),L1.end());//报错！ 所有不支持随机访问的迭代器，不可以用标准算法
	L1.sort();//不支持随机访问迭代器的容器，内部会提供对应一些算法
	cout << "排序后：" << endl;
	printList5(L1);
	L1.sort(myCompare);
	cout << "降序排序后：" << endl;
	printList5(L1);


	return 0;
}