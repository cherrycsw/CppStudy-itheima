#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector����Ԥ���ռ�
//���ܣ�����vector�ڶ�̬��չ����ʱ����չ���� ����reserveԤ���ռ���


int main111() {
	int mainNum = 111;
	vector<int> v1;

	//����reserveԤ���ռ���
	v1.reserve(100000);

	int num = 0;//ͳ�ƿ��ٴ���
	int *p = NULL;
	for (int i = 0; i < 100000; i++) {
		v1.push_back(i);
		if (p!=&v1[0]) {//vector�����ڴ�ʱ���Ὣ�ɵ�ַ�����ݿ������µ�ַ��Ҳ�����׵�ַ�ᷢ���仯���׵�ַÿ�仯һ�ξ��ǿ���һ���ڴ�ռ�
			p = &v1[0];
			num++;
		}
	}
	cout <<"�ڴ濪�ٴ���Ϊ��"<< num << endl;
	//printVector(v1);

	return 0;
}