#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string字符串插入和删除


int main103() {
	int mainNum = 103;
	string str1 = "hello";
	//插入
	str1.insert(1,"111");//在1号下标位置插入字符串"111"
	cout << str1 << endl;
	//删除
	str1.erase(1,3);//从1号下标位置开始删除3个字符
	cout << str1 << endl;

	return 0;
}