#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string�Ӵ���ȡ
//string substr(int pos=0,int n=npos) const;//������pos��ʼ��n���ַ���ɵ��ַ���

int main104() {
	int mainNum = 104;
	string str1 = "helloworld";
	string substr = str1.substr(5,5);
	cout << substr << endl;
	string email = "zhangsan@sina.com";
	int pos = email.find("@");
	cout << email.substr(0, pos) << endl;
	return 0;
}