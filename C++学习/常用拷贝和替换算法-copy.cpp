#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//���ÿ������滻�㷨-copy       ������ָ����ΧԪ�ؿ�������һ������
//���ÿ������滻�㷨-replace    ������ָ����Χ�ľ�Ԫ���滻Ϊ��Ԫ��
//���ÿ������滻�㷨-replace_if ���������������ľ�Ԫ���滻Ϊ��Ԫ��
//���ÿ������滻�㷨-swap       ��������������Ԫ��

int main155() {
	int mainNum = 155;
	//������������
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	vector<int> v2;
	v2.resize(v1.size());
	copy(v1.begin(),v1.end(),v2.begin());//copy
	for_each(v2.begin(), v2.end(), [](int v) {cout << v << " "; });
	cout << endl;
	return 0;
}