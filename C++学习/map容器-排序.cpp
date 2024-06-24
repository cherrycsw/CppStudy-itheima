#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
//map容器排序规则

class myCompare3 {
public:
	bool operator()(int v1,int v2) {
		return v1 > v2;
	}
};


void printMap3(const map<int, string> &m) {
	for (map<int, string>::const_iterator it = m.begin(); it != m.end(); it++) {
		cout << "(" << (*it).first << "," << (*it).second << ")" << " ";
	}
	cout << endl;
}
void printMap4(const map<int, string,myCompare3> &m) {
	for (map<int, string>::const_iterator it = m.begin(); it != m.end(); it++) {
		cout << "(" << (*it).first << "," << (*it).second << ")" << " ";
	}
	cout << endl;
}

int main136() {
	int mainNum = 136;
	map<int, string> m;//默认排序 按照key从小到大
	m.insert(make_pair(0,"张三"));
	m.insert(make_pair(3, "李四"));
	m.insert(make_pair(1, "王五"));
	m.insert(make_pair(2, "赵六"));
	m.insert(make_pair(4, "孙琪"));
	printMap3(m);
	map<int, string,myCompare3> m1;//从大到小
	m1.insert(make_pair(0, "张三"));
	m1.insert(make_pair(3, "李四"));
	m1.insert(make_pair(1, "王五"));
	m1.insert(make_pair(2, "赵六"));
	m1.insert(make_pair(4, "孙琪"));
	printMap4(m1);
	
	return 0;
}