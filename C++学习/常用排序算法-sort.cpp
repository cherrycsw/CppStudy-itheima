#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//���������㷨sort

int main152() {
	int mainNum = 152;
	//������������
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	v1.push_back(2);
	v1.push_back(2);
	sort(v1.begin(),v1.end());//Ĭ�ϴ�С����
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	sort(v1.begin(), v1.end(), greater<int>());//�Ӵ�С �������� ��Ԫν��
	sort(v1.begin(), v1.end(), [](int v1, int v2) {return v1 > v2; });//�Ӵ�С lambda���ʽ
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	
	return 0;
}