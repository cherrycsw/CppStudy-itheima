#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
//set����-set��multiset����

void printSet1(const set<int> &s) {
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void printSet2(const multiset<int> &s) {
	for (multiset<int>::const_iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main130() {
	int mainNum = 130;
	set<int> s1;
	pair<set<int>::iterator, bool> ret= s1.insert(10);
	if (ret.second) {
		cout << "��һ�β���ɹ�" << endl;
	}
	else {
		cout << "��һ�β���ʧ��" << endl;
	}
	ret=s1.insert(10);
	if (ret.second) {
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else {
		cout << "�ڶ��β���ʧ��" << endl;
	}
	printSet1(s1);

	multiset<int> s2;
	s2.insert(10);
	s2.insert(10);
	s2.insert(10);
	printSet2(s2);


	//ͳ��û������

	return 0;
}