#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//���������㷨random_shuffle:�����������ڵ�Ԫ��˳����� ϴ���㷨

int main1533() {
	int mainNum = 1533;
	srand((unsigned int)time(NULL));//���������
	//������������
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	random_shuffle(v1.begin(),v1.end());
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	return 0;
}