#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//���ò����㷨binary_search(���ֲ��ҷ�) ����ָ����Ԫ�أ��鵽����true������false ע�⣺�����������в�����


int main149() {
	int mainNum = 149;
	//������������
	vector<int> v1;
	for (int i = 0; i < 10;i++) {
		v1.push_back(i);
	}
	bool ret = binary_search(v1.begin(), v1.end(), 9);

	if (ret) {
		cout << "�ҵ�Ԫ��" << endl;
	}
	else {
		cout << "δ�ҵ�Ԫ��" << endl;
	}


	return 0;
}