#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//�ڽ���������-�����º�����STL�ڽ���һЩ��������
//��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
//ʹ���ڽ�����������Ҫ����ͷ�ļ�#include<functional>


int main141() {
	int mainNum = 141;
	vector<int> v;
	//negate һԪ�º��� ȡ���º���
	negate<int> n;
	cout << n(50) << endl;
	//plus ��Ԫ�º��� �ӷ��º���
	plus<int> p;
	cout << p(20, 1) << endl;

	return 0;
}