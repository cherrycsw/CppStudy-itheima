#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//list���������ɾ��

void printList3(const list<int> l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
		cout << (*it) << endl;
	}
	cout << endl;
}

int main124() {
	int mainNum = 124;
	list<int> L1;//Ĭ�Ϲ���
	//β��
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	//ͷ��
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	printList3(L1);
	//βɾ
	L1.pop_back();
	printList3(L1);
	//ͷɾ
	L1.pop_front();
	printList3(L1);
	//insert����
	list<int>::iterator it = L1.begin();
	L1.insert(it,1000);
	printList3(L1);

	it = L1.begin();
	L1.insert(++it, 1000);
	printList3(L1);

	//ɾ��
	it = L1.begin();
	L1.erase(it);
	printList3(L1);

	L1.push_back(10000);
	L1.push_back(10000);
	L1.push_back(10000);
	printList3(L1);
	L1.remove(10000);//ɾ������Ϊ10000��Ԫ��
	printList3(L1);
	
	return 0;
}