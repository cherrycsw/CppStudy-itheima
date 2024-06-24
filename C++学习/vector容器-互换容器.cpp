#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector��������

void printVector(vector<int> &v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout<<(*it)<<" ";
	}
	cout << endl;
}

int main110() {
	int mainNum = 110;
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2;
	for (int i = 10; i > 0; i--) {
		v2.push_back(i);
	}
	printVector(v2);

	//��������
	v1.swap(v2);
	printVector(v1);
	printVector(v2);

	//ʵ����;������swap���������ڴ�ռ�
	vector<int> v3;
	for (int i = 0; i < 100000; i++) {
		v3.push_back(i);
	}
	cout << "v3������Ϊ��" << v3.capacity() << endl;
	cout << "v3�Ĵ�СΪ��" << v3.size() << endl;

	v3.resize(3);//����ָ����С
	cout << "v3������Ϊ��" << v3.capacity() << endl;
	cout << "v3�Ĵ�СΪ��" << v3.size() << endl;

	//swap�����ڴ�ռ�
	vector<int>(v3).swap(v3);//vector<int>(v3)������һ���������󣬲����ÿ������캯����v3��ʼ��������������ʱ��
	                        //��������������ʹ�С�͵���v3�Ĵ�С,Ȼ������������v3����������v3�������ʹ�С=��������������ʹ�С=v3�Ĵ�С
	                       //Ȼ�������������Ŵ��д���Ľ������ͷſռ�
	cout << "v3������Ϊ��" << v3.capacity() << endl;
	cout << "v3�Ĵ�СΪ��" << v3.size() << endl;
	return 0;
}