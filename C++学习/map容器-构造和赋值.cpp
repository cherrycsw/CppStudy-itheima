#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
//map��������͸�ֵ
//��飺
//1��map������Ԫ�ض���pair(����)
//2��pair�е�һ��Ԫ��Ϊkey(��ֵ)�����������ã��ڶ���Ԫ��Ϊvalue(ʵֵ)
//3������Ԫ�ض������Ԫ�ؼ�ֵ(key)�Զ�����

//���ʣ�map��multimap�����ڹ���ʽ�������ײ�ṹ���ö�����ʵ�ֵ�

//�ŵ㣺���Ը���keyֵ�����ҵ�valueֵ

//map��multimap����map���������������ظ���keyֵԪ�� multimap���������ظ���keyֵԪ��
void printMap(const map<int, string> &m) {
	for (map<int, string>::const_iterator it = m.begin(); it != m.end();it++) {
		cout <<"(" <<(*it).first<<","<< (*it).second << ")" << " ";
	}
	cout << endl;
}

int main134() {
	int mainNum = 134;
	map<int, string> m;//Ĭ�Ϲ���
	m.insert(pair<int,string>(0,"����"));//���������鵱����
	m.insert(pair<int, string>(3, "����"));
	m.insert(pair<int, string>(2, "����"));
	m.insert(pair<int, string>(4, "����"));
	m.insert(pair<int, string>(1, "����"));
	printMap(m);
	map<int, string> m1(m);//Ĭ��������
	map<int, string> m2;
	m2 = m1;//��ֵ����
	


	return 0;
}