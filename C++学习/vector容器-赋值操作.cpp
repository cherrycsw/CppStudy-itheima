#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector������ֵ����
//vector &operator=(const vector &vec); ���صȺŲ�����
//asign(beg,end)                        ��[beg,end)�����е����ݿ�����ֵ������
//asign(n,elem)                         ��n��elem������ֵ������

void print3(int value) {
	cout << value << endl;
}

int main106() {
	int mainNum = 106;
	//vector���캯��
	vector<int> v1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0; i < 5; i++) {
		v1.push_back(i);
	}
	vector<int> v2=v1;
	for_each(v2.begin(),v2.end(),print3);

	return 0;
}