#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
//队列基本概念 特点：先进先出 只允许队尾入队，队头出队；只有队头和队尾元素能被访问

int main120() {
	int mainNum = 120;
	queue<int> q;
	q.push(10);//队尾入队操作
	q.push(20);
	q.push(30);
	q.push(40);
	cout << "队列的大小为：" << q.size() << endl;
	while (!q.empty()) {
		//查看栈顶的操作
		cout << "队头元素为：" << q.front() << endl;
		cout << "队尾元素为：" << q.back() << endl;
		q.pop();//队头出队操作
	}
	cout << "队列的大小为：" << q.size() << endl;

	return 0;
}