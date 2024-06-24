#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
//deque������С���� û��������С�ĸ���

void printDeque2(const deque<int> &d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		//*(it) = 100;
		cout << *(it) << " ";
	}
	cout << endl;
}


int main114() {
	int mainNum = 114;
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque2(d1);
	cout <<"d1��СΪ��"<< d1.size() << endl;

	d1.resize(15,1);
	printDeque2(d1);
	cout << "d1��СΪ��" << d1.size() << endl;

	d1.resize(3);
	printDeque2(d1);
	cout << "d1��СΪ��" << d1.size() << endl;

	return 0;
}