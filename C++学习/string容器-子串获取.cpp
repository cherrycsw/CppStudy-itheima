#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string子串获取
//string substr(int pos=0,int n=npos) const;//返回由pos开始的n个字符组成的字符串

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