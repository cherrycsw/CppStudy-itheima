#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//list������ת������

void printList5(const list<int> l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1,int v2) {
	return v1 > v2;
}

int main126() {
	int mainNum = 126;
	list<int> L1;
	L1.push_back(40);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(10);
	cout << "��תǰ��" << endl;
	printList5(L1);

	L1.reverse();//��ת
	cout << "��ת��" << endl;
	printList5(L1);

	//����
	cout << "����ǰ��" << endl;
	printList5(L1);
	//sort(L1.begin(),L1.end());//���� ���в�֧��������ʵĵ��������������ñ�׼�㷨
	L1.sort();//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
	cout << "�����" << endl;
	printList5(L1);
	L1.sort(myCompare);
	cout << "���������" << endl;
	printList5(L1);


	return 0;
}