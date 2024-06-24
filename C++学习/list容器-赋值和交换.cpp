#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//list容器复制和交换

void printList1(const list<int> l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
		cout << (*it) << endl;
	}
	cout << endl;
}

int main122() {
	int mainNum = 122;
	list<int> L1;//默认构造
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);
	printList1(L1);

	list<int> L2=L1;//=号赋值
	printList1(L2);

	list<int> L3;
	L3.assign(10, 100);
	printList1(L3);

	L2.swap(L3);//交换
	printList1(L2);
	printList1(L3);
	return 0;
}