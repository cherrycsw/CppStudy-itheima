#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
//set��������͸�ֵ
//set�������������򼯺� �ص㣺����Ԫ�ض����ڲ����ʱ���Զ����� 
//���ʣ�set/muliset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�ֵ�

//set��multiset����
//set���������������ظ���Ԫ��
//multiset�������������ظ���Ԫ��

//ע��1����������ֻ��insert���� set������resize������ָ����С����Ϊ���Ĵ�С���������ظ�������
//ע��2��erase(pos)ɾ��pos�������±��Ԫ�� erase(elem)����ֱ��ɾ����ֵ����elem��Ԫ��
void printSet(const set<int> &s) {
	for (set<int>::const_iterator it = s.begin(); it != s.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main128() {
	int mainNum = 128;
	set<int> s;
	s.insert(10);
	s.insert(20);
	printSet(s);
	s.insert(15);
	printSet(s);
	s.insert(1);
	printSet(s);
	s.insert(30);
	printSet(s);

	return 0;
}