#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
//map�����������

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
	map<int, string> m;//Ĭ������ ����key��С����
	m.insert(make_pair(0,"����"));
	m.insert(make_pair(3, "����"));
	m.insert(make_pair(1, "����"));
	m.insert(make_pair(2, "����"));
	m.insert(make_pair(4, "����"));
	printMap3(m);
	map<int, string,myCompare3> m1;//�Ӵ�С
	m1.insert(make_pair(0, "����"));
	m1.insert(make_pair(3, "����"));
	m1.insert(make_pair(1, "����"));
	m1.insert(make_pair(2, "����"));
	m1.insert(make_pair(4, "����"));
	printMap4(m1);
	
	return 0;
}