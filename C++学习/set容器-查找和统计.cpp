#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
//set�������Һ�ͳ��
//find(key);  ����key�Ƿ���ڣ������ڣ����ظ�Ԫ��λ�õĵ��������������ڣ��򷵻�β����������set.end()


int main129() {
	int mainNum = 129;
	set<int> s;
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(40);

	set<int>::iterator pos = s.find(30);
	if (pos!=s.end()) {//�ж��Ƿ���ҳɹ�
		cout << "�ҵ�Ԫ��" << endl;
	}
	else {
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��û������

	return 0;
}