#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
//���л������� �ص㣺�Ƚ��ȳ� ֻ�����β��ӣ���ͷ���ӣ�ֻ�ж�ͷ�Ͷ�βԪ���ܱ�����

int main120() {
	int mainNum = 120;
	queue<int> q;
	q.push(10);//��β��Ӳ���
	q.push(20);
	q.push(30);
	q.push(40);
	cout << "���еĴ�СΪ��" << q.size() << endl;
	while (!q.empty()) {
		//�鿴ջ���Ĳ���
		cout << "��ͷԪ��Ϊ��" << q.front() << endl;
		cout << "��βԪ��Ϊ��" << q.back() << endl;
		q.pop();//��ͷ���Ӳ���
	}
	cout << "���еĴ�СΪ��" << q.size() << endl;

	return 0;
}