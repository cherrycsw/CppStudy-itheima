#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector容器获取容量和大小


void print4(int value) {
	cout << value << endl;
}

int main107() {
	int mainNum = 107;
	vector<int> v1;
	for (int i = 0; i < 5; i++) {
		v1.push_back(i);
	}
	
	if (v1.empty()) {//为真 代表容器为空
		cout << "容器为空" << endl;
	}
	else {
		cout << "容器不为空" << endl;
		cout << "容器容量为："<<v1.capacity() << endl;//获取容量
		cout << "容器大小为：" << v1.size() << endl;//获取大小
	}
	for_each(v1.begin(), v1.end(), print4);
	//重新指定大小 过长的话用0填充
	v1.resize(10);
	cout << "容器容量为：" << v1.capacity() << endl;//获取容量
	cout << "容器大小为：" << v1.size() << endl;//获取大小
	for_each(v1.begin(), v1.end(), print4);

	//重新指定大小 过短的话删除多余的
	v1.resize(4);
	cout << "容器容量为：" << v1.capacity() << endl;//获取容量
	cout << "容器大小为：" << v1.size() << endl;//获取大小
	for_each(v1.begin(), v1.end(), print4);

	return 0;
}