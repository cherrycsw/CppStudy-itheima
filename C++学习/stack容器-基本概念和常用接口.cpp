#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
//ջ�������� �ص㣺�Ƚ���� ֻ�ܷ���ͷ��Ԫ�� �����������Ϊ �������ж�ջ�Ƿ�Ϊ�պ�ջ�����е�Ԫ�ظ���

int main119() {
	int mainNum = 119;
	stack<int> s;
	s.push(10);//��ջ����
	s.push(20);
	s.push(30);
	s.push(40);

	while (!s.empty()) {
		//�鿴ջ���Ĳ���
		cout <<"ջ��Ԫ��Ϊ��"<< s.top() << endl;
		s.pop();//��ջ����
	}
	cout << "ջ�Ĵ�СΪ��"<<s.size() << endl;

	return 0;
}