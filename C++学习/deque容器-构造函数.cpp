#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
//deque������˫�����飬���Զ�ͷ�˽��в���ɾ������
//deque��vector����
//1��vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ��
//2��deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻ��vector��
//3��vector����Ԫ��ʱ���ٶȻ��deque�죬��������ڲ�ʵ���й�
void printDeque(const deque<int> &d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end();it++) {
		//*(it) = 100;
		cout << *(it) << " ";
	}
	cout << endl;
}


int main112() {
	int mainNum = 112;
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int> d2(d1.begin(),d1.end());
	printDeque(d2);

	deque<int> d3(10, 100);
	printDeque(d3);

	deque<int> d4(d3);
	printDeque(d4);
	return 0;
}