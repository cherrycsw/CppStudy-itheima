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

int main156() {
	int mainNum = 156;
	//������������
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	v1.push_back(2);
	v1.push_back(2);
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	replace(v1.begin(), v1.end(),2,1000);//replace ��ָ����Χ�ڵ�2��Ϊ1000
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;;
	return 0;
}