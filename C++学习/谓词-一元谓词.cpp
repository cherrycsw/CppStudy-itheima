#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
using namespace std;
//һԪν�� �������bool���͵ķº�����Ϊν��
//���operator()����һ����������ô�ͽ���һԪν��
//���operator()����������������ô������Ԫν��

class GreaterFive {
public:

	bool operator()(int v) {
		
		return v>5;

	}

};

int main139() {
	int mainNum = 139;
	vector<int> v;
	for (int i = 0; i < 10;i++) {
		v.push_back(i);
	}
	//������������û�д���5������
	vector<int>::iterator it=find_if(v.begin(), v.end(), GreaterFive());
	if (it==v.end()) {
		cout << "δ�ҵ�" << endl;
	}
	else {
		cout << "�ҵ���" << endl;
		cout << *it << endl;
	}

	return 0;
}