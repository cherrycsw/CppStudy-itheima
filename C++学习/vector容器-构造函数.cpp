#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector���������ݽṹ�����������
//���������Ǿ�̬�ռ䣬vector���Զ�̬��չ

void print(int value) {
	cout << value << endl;
}

int main105() {
	int mainNum = 105;
	//vector���캯��
	vector<int> v1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0; i < 10;i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(),v1.end(),print);

	vector<int> v2(v1.begin(),v1.end());//�����ʼ��
	for_each(v2.begin(), v2.end(), print);

	vector<int> v3(10,5);//��ʼ��10��5
	for_each(v3.begin(), v3.end(), print);

	vector<int> v4(v1);//��ʼ��10��5
	for_each(v4.begin(), v4.end(), print);
	
	return 0;
}
