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
//�������������㷨fill ���������㷨����С���㷨��ʹ��ʱҪ����ͷ�ļ�#include<numeric>
//accumulate  ��������������Ԫ���ۼ��ܺ�
//fill        �����������Ԫ��

int main160() {
	int mainNum = 160;
	//������������
	vector<int> v1;
	v1.resize(10);
	
	//�����������
	fill(v1.begin(), v1.end(), 100);
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	return 0;
}