#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
#include<numeric>

using namespace std;
//���ü����㷨��
//set_intersection ����������(������vector���� ���������� ��ò�Ҫ�ظ�)�Ľ���  ����Ŀ�������������λ����һ��Ԫ�صĵ�����
//set_union        �����������Ĳ���
//set_difference   �����������Ĳ

int main161() {
	int mainNum = 161;
	//������������
	vector<int> v1;
	for (int i = 0; i < 10;i++) {
		v1.push_back(i);
	}
	v1.push_back(9);
	v1.push_back(9);
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v2.push_back(i+5);
	}
	for_each(v2.begin(), v2.end(), [](int v) {cout << v << " "; });
	cout << endl;
	vector<int> v3;
	v3.resize(v1.size() > v2.size() ? v2.size() : v1.size());
	//��ȡ����
	vector<int>::iterator itEnd=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), v3.end(), [](int v) {cout << v << " "; });//��Ҫ��v3,end() ��Ϊ��ӡ�����Ļ��в����0Ԫ��
	cout << endl;
	for_each(v3.begin(), itEnd, [](int v) {cout << v << " "; });
	cout << endl;

	return 0;
}