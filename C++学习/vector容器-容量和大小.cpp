#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector������ȡ�����ʹ�С


void print4(int value) {
	cout << value << endl;
}

int main107() {
	int mainNum = 107;
	vector<int> v1;
	for (int i = 0; i < 5; i++) {
		v1.push_back(i);
	}
	
	if (v1.empty()) {//Ϊ�� ��������Ϊ��
		cout << "����Ϊ��" << endl;
	}
	else {
		cout << "������Ϊ��" << endl;
		cout << "��������Ϊ��"<<v1.capacity() << endl;//��ȡ����
		cout << "������СΪ��" << v1.size() << endl;//��ȡ��С
	}
	for_each(v1.begin(), v1.end(), print4);
	//����ָ����С �����Ļ���0���
	v1.resize(10);
	cout << "��������Ϊ��" << v1.capacity() << endl;//��ȡ����
	cout << "������СΪ��" << v1.size() << endl;//��ȡ��С
	for_each(v1.begin(), v1.end(), print4);

	//����ָ����С ���̵Ļ�ɾ�������
	v1.resize(4);
	cout << "��������Ϊ��" << v1.capacity() << endl;//��ȡ����
	cout << "������СΪ��" << v1.size() << endl;//��ȡ��С
	for_each(v1.begin(), v1.end(), print4);

	return 0;
}