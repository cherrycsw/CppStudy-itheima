#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//list�������ݴ�ȡ


int main125() {
	int mainNum = 125;
	list<int> L1;//Ĭ�Ϲ���
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	//������[]����list�����е�Ԫ�� ԭ����list�����������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
	//cout << L1[1] <<endl;
	cout << L1.front() << endl;
	cout << L1.back() << endl;
	

	return 0;
}