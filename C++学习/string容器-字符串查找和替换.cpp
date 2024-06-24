#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string查找和替换
//查找：查找字符串是否存在
//替换：在指定的位置替换字符串


int main100() {
	int mainNum = 100;
	//find 从左往右查
	string str1 = "abcdefg";
	int pos1=str1.find("de", 0);//查找字符串"de"在字符串str1中第一次出现位置，从0号下标开始查
	cout << pos1 << endl;
	int pos2 = str1.find("hj", 0);
	cout << pos2<< endl;//-1表示未查到

	//rfind 从右往左查
	int pos3 = str1.rfind("de",0); //从右往左查并从0号下标开始 返回-1 表示未查到
	cout << pos3 << endl;
	int pos4 = str1.rfind("de", 6); //从右往左查并从6号下标（字符串尾部）开始 查到了
	cout << pos4 << endl;

	string str2 = "abcdefgde";
	int pos5 = str2.find("de", 0);
	int pos6 = str2.rfind("de", 8);
	cout << pos5 << endl;
	cout << pos6 << endl;

	//替换
	str1.replace(1,3,"1111");//从1号下标起将3个字符替换为"1111"
	cout <<str1 << endl;
	return 0;
}