#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
//deque���������ɾ��

void printDeque3(const deque<int> &d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		//*(it) = 100;
		cout << *(it) << " ";
	}
	cout << endl;
}


int main115() {
	int mainNum = 115;
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);//β�巨
	}
	printDeque3(d1);
	d1.push_front(100);//ͷ�巨
	printDeque3(d1);

	d1.pop_back();//βɾ��
	printDeque3(d1);

	d1.pop_front();//ͷɾ��
	printDeque3(d1);

	//insert����
	d1.insert(d1.begin(),1000);
	printDeque3(d1);

	//�����������
	deque<int> d2(d1);
	printDeque3(d2);
	d2.insert(d2.begin(), d1.begin(), d1.end());
	printDeque3(d2);

	//ɾ��
	deque<int>::iterator it = d2.begin();
	it++;
	d2.erase(it);
	printDeque3(d2);
	return 0;
}