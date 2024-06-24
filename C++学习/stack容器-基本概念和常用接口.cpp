#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
//栈基本概念 特点：先进后出 只能访问头部元素 不允许遍历行为 但可以判断栈是否为空和栈容器中的元素个数

int main119() {
	int mainNum = 119;
	stack<int> s;
	s.push(10);//入栈操作
	s.push(20);
	s.push(30);
	s.push(40);

	while (!s.empty()) {
		//查看栈顶的操作
		cout <<"栈顶元素为："<< s.top() << endl;
		s.pop();//出栈操作
	}
	cout << "栈的大小为："<<s.size() << endl;

	return 0;
}