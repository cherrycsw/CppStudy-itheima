#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string��ֵ����

//string &operator=(const char *s);       char *�����ַ�����ֵ����ǰ�ַ���
//sstring &operator=(const string *s);    ���ַ���s��ֵ����ǰ�ַ���
//string &operator=(char c);              ���ַ���ֵ����ǰ�ַ���
//string assign(const char *s);           ���ַ���s��ֵ����ǰ�ַ���
//string assign(const char *s,int n);     ���ַ���s��ǰn���ַ���ֵ����ǰ�ַ���
//string assign(const string &s);         ���ַ���s��ֵ����ǰ�ַ���
//string assign(int n,char c);            ��n���ַ�c������ǰ�ַ���

int main98() {
	int mainNum = 98;
	string str1 = "hello";
	cout << str1 << endl;
	string str2 = str1;
	cout << str2 << endl;
	string str3 ;
	str3 = 'a';
	cout << str3 << endl;

	string str4;
	str4.assign("hello",3);
	cout << str4 << endl;

	return 0;
}