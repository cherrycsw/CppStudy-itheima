#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//Ƕ������

void print2(int value) {//ע�⣺�ú���Ҫ����print1������ǰ�� ��Ȼ��������ʾ�ú���δ����
	cout << value << " ";
}

void print1(vector<int> &v) {
	for_each(v.begin(),v.end(),print2);
	cout << endl;
}

int main96() {
	int mainNum = 96;
	//���������� �൱�ڶ�ά����
	vector<vector<int>> v;
	//����С����
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	for (int i = 0; i < 4;i++) {
		v1.push_back(i+1);
		v2.push_back(i+2);
		v3.push_back(i+3);
		v4.push_back(i+4);
	}
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//ͨ�������������е����ݱ���һ��
	//����һ��
	for (vector<vector<int>>::iterator it1 = v.begin(); it1 != v.end(); it1++) {
		for (vector<int>::iterator it2 = (*it1).begin(); it2 != (*it1).end(); it2++) {
			cout << *it2 << " ";
		}
		cout << endl;
	}

	//��������
	for_each(v.begin(), v.end(), print1);

	return 0;
}