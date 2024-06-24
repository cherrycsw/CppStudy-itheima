#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
//set容器内置类型指定排序规则
//set容器默认排序规则为：从小到大，掌握如何改变排序规则 主要技术：利用仿函数

class MyCompare3 {
public:
	bool operator()(int v1,int v2){
		return v1 > v2;
	}
};

int main132() {
	int mainNum = 132;
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);
	for (set<int>::iterator it = s1.begin(); it != s1.end();it++) {
		cout << *it << " ";
	}
	cout << endl;

	//指定排序规则为从大到小
	set<int, MyCompare3> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(50);
	s2.insert(30);
	for (set<int, MyCompare3>::iterator it = s2.begin(); it != s2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}