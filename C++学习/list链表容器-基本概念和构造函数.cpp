#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//����������� �ص㣺�ɽڵ���󹹳ɣ�ÿ���ڵ�������һ���������һ��ָ����һ���ڵ��ָ����
//STL�е�list��һ��˫��ѭ���б�
//�ŵ㣺��ɾ�ٶȿ죬���ö�̬�洢���䣬��������˷Ѻ��洦�����vector��
//ȱ�㣺�ռ�ռ��������ͨ���������������Ч�ʵͣ���֧�����������ȡit+3
//list��һ����Ҫ�����ʣ����������ɾ���������������ԭ��list��������ʧЧ������vector���ǲ������ģ���Ϊvector�������������޺󶼻����¿����ڴ棬�����µĵ�����ָ��Ҫ����������

void printList(const list<int> l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end();it++) {
		cout << (*it) << endl;
	}
	cout << endl;
}

int main121() {
	int mainNum = 121;
	list<int> L1;//Ĭ�Ϲ���
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);
	printList(L1);

	list<int> L2(L1);//��������
	printList(L2);

	return 0;
}