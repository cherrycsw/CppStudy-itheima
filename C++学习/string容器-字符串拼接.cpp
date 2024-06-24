#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string拼接操作


int main99() {
	int mainNum = 99;
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << str1 << endl;
	str1 += ":";
	cout << str1 << endl;
	string str2 = "LOL DNF";
	str1 += str2;
	cout << str1 << endl;

	string str3 = "I";
	str3.append(" Love");
	cout << str3<< endl;
	str3.append(" Game abc",5);//将字符串的前5个字符尾加到str3
	cout << str3 << endl;
	str3.append(str2, 3, 4);//从str2的下标为3的位置开始截取4个字符尾加到str3
	cout << str3 << endl;
	return 0;
}