#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
#include<numeric>

using namespace std;
//�������������㷨accumulate ���������㷨����С���㷨��ʹ��ʱҪ����ͷ�ļ�#include<numeric>
//accumulate  ��������������Ԫ���ۼ��ܺ�
//fill        �����������Ԫ��

int main159() {
	int mainNum = 159;
	//������������
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	int total=accumulate(v1.begin(), v1.end(),0);//�ۼ��㷨 0��ʾ��ʼ���ۼ�ֵ total���Ľ��=v1����������Ԫ��ֵ֮��+0
	cout << total << endl;
	return 0;
}