#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//list容器大小操作

void printList2(const list<int> l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
		cout << (*it) << endl;
	}
	cout << endl;
}

int main123() {
	int mainNum = 123;
	list<int> L1;//默认构造
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);
	printList2(L1);
	if (L1.empty()) {
		cout << "L1为空" << endl;
	}
	else {
		cout << "L1不为空" << endl;
		cout << "L1元素个数为："<<L1.size() << endl;
	}
	return 0;
}