#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//list������С����

void printList2(const list<int> l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
		cout << (*it) << endl;
	}
	cout << endl;
}

int main123() {
	int mainNum = 123;
	list<int> L1;//Ĭ�Ϲ���
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);
	printList2(L1);
	if (L1.empty()) {
		cout << "L1Ϊ��" << endl;
	}
	else {
		cout << "L1��Ϊ��" << endl;
		cout << "L1Ԫ�ظ���Ϊ��"<<L1.size() << endl;
	}
	return 0;
}