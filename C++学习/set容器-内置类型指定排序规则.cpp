#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
//set������������ָ���������
//set����Ĭ���������Ϊ����С����������θı�������� ��Ҫ���������÷º���

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

	//ָ���������Ϊ�Ӵ�С
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