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

int main158() {
	int mainNum = 158;
	//������������
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	vector<int> v2;
	for (int i = 10; i > 0; i--) {
		v2.push_back(i);
	}
	for_each(v2.begin(), v2.end(), [](int v) {cout << v << " "; });
	cout << endl;
	//v1.swap(v2);

	swap(v1, v2);//swap����

	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	for_each(v2.begin(), v2.end(), [](int v) {cout << v << " "; });
	cout << endl;
	return 0;
}