#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
//pair����ʹ��


int main131() {
	int mainNum = 131;
	pair<string, int> p1("Tom", 20);//��һ�ִ�����ʽ
	cout << "������" <<p1.first << " ���䣺" << p1.second <<endl;

	pair<string, int> p2=make_pair("Jerry", 10);//�ڶ��ִ�����ʽ
	cout << "������" << p2.first << " ���䣺" << p2.second << endl;

	//ͳ��û������

	return 0;
}