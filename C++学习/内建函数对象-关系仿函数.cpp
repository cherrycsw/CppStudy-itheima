#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//�ڽ���������-��ϵ�º��� greater ����
class sortClass {
public:
	bool operator()(int v1,int v2) {
		return v1 > v2;
	}
};

int main142() {
	int mainNum = 142;
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	for (vector<int>::iterator it = v.begin(); it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;

	//�������ڽ���ϵ�º���
	sort(v.begin(),v.end(),sortClass());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//ʹ���ڽ���ϵ�º���
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}