#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
//deque容器赋值操作

void printDeque1(const deque<int> &d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		//*(it) = 100;
		cout << *(it) << " ";
	}
	cout << endl;
}


int main113() {
	int mainNum = 113;
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque1(d1);
	deque<int> d2;

	d2 = d1;//=号赋值
	printDeque1(d2);

	deque<int> d3;
	d3.assign(d1.begin(),d1.end());//asign方式赋值
	printDeque1(d3);

	deque<int> d4;
	d4.assign(10, 100);//asign方式2赋值
	printDeque1(d4);


	return 0;
}