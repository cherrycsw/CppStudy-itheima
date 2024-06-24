#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
//deque容器：双端数组，可以对头端进行插入删除操作
//deque与vector区别：
//1、vector对于头部的插入删除效率低，数据量越大，效率越低
//2、deque相对而言，对头部的插入删除速度会比vector快
//3、vector访问元素时的速度会比deque快，这和两者内部实现有关
void printDeque(const deque<int> &d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end();it++) {
		//*(it) = 100;
		cout << *(it) << " ";
	}
	cout << endl;
}


int main112() {
	int mainNum = 112;
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int> d2(d1.begin(),d1.end());
	printDeque(d2);

	deque<int> d3(10, 100);
	printDeque(d3);

	deque<int> d4(d3);
	printDeque(d4);
	return 0;
}