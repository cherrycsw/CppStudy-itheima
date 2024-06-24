#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string赋值操作

//string &operator=(const char *s);       char *类型字符串赋值给当前字符串
//sstring &operator=(const string *s);    把字符串s赋值给当前字符串
//string &operator=(char c);              把字符赋值给当前字符串
//string assign(const char *s);           把字符串s赋值给当前字符串
//string assign(const char *s,int n);     把字符串s的前n个字符赋值给当前字符串
//string assign(const string &s);         把字符串s赋值给当前字符串
//string assign(int n,char c);            用n个字符c赋给当前字符串

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