#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
using namespace std;
//�������bool���͵ķº�����Ϊν�� 
//���operator()����������������ô������Ԫν��

class sortclass {
public:
	bool operator()(int v1,int v2) {
		return v1 > v2;

	}

};

int main140() {
	int mainNum = 140;
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	for (vector<int>::iterator it = v.begin(); it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
	//�������е������Զ�������
	sort(v.begin(), v.end(), sortclass());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	

	return 0;
}