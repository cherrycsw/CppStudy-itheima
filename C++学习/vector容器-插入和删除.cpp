#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector���������ɾ��


void print5(int value) {
	cout << value << " ";
}

int main108() {
	int mainNum = 108;
	vector<int> v1;
	for (int i = 0; i < 5; i++) {
		v1.push_back(i);
	}
	v1.push_back(5);//β������Ԫ��
	v1.push_back(6);
	for_each(v1.begin(), v1.end(), print5);
	cout << endl;

	v1.pop_back();//β��ɾ��Ԫ��
	for_each(v1.begin(), v1.end(), print5);
	cout << endl;

	v1.insert(v1.begin(), 10);//������ָ��λ��v1.begin()����Ԫ��10
	for_each(v1.begin(), v1.end(), print5);
	cout << endl;

	v1.insert(v1.begin(),3, 10);//������ָ��λ��v1.begin()����3��Ԫ��10
	for_each(v1.begin(), v1.end(), print5);
	cout << endl;

	v1.erase(v1.begin());//ɾ��������v1.begin()ָ���Ԫ��
	for_each(v1.begin(), v1.end(), print5);
	cout << endl;

	v1.erase(v1.begin(),v1.end());//ɾ����������begin��end֮���Ԫ�أ��ȼ�����ղ���=v1.clear();
	for_each(v1.begin(), v1.end(), print5);
	
	
	return 0;
}