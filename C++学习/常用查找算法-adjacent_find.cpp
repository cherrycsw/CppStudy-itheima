#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//���ò����㷨adjacent_find ���������ظ�Ԫ�أ���������Ԫ�صĵ�һ��λ�õĵ����� ���򷵻����һ��������


int main148() {
	int mainNum = 148;
	//������������
	vector<int> v1;
	v1.push_back(0);
	v1.push_back(3);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(1);
	v1.push_back(4);
	v1.push_back(3);
	v1.push_back(3);
	/*vector<int>::iterator pos = v1.begin();
	int count = 0;
	while(pos!=v1.end()){
		pos=adjacent_find(pos, v1.end());
		if (pos != v1.end()) {
			count++;
			pos = pos + 2;
		}
	}*/
	vector<int>::iterator pos= adjacent_find(v1.begin(), v1.end());
	if (pos==v1.end()) {
		cout << "δ�ҵ������ظ�Ԫ��" << endl;
	}
	else {

		cout << "�ҵ������ظ�Ԫ�أ�" <<*pos<< endl;
	}


	return 0;
}