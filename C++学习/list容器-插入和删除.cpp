#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//list容器插入和删除

void printList3(const list<int> l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
		cout << (*it) << endl;
	}
	cout << endl;
}

int main124() {
	int mainNum = 124;
	list<int> L1;//默认构造
	//尾插
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	//头插
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	printList3(L1);
	//尾删
	L1.pop_back();
	printList3(L1);
	//头删
	L1.pop_front();
	printList3(L1);
	//insert插入
	list<int>::iterator it = L1.begin();
	L1.insert(it,1000);
	printList3(L1);

	it = L1.begin();
	L1.insert(++it, 1000);
	printList3(L1);

	//删除
	it = L1.begin();
	L1.erase(it);
	printList3(L1);

	L1.push_back(10000);
	L1.push_back(10000);
	L1.push_back(10000);
	printList3(L1);
	L1.remove(10000);//删除所有为10000的元素
	printList3(L1);
	
	return 0;
}