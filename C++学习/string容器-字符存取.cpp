#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string�ַ���ȡ
//char& operator[](int n);//ͨ��[]��ʽȡ�ַ����޸�
//char& at(int n);//ͨ��at������ȡ�ַ����޸�


int main102() {
	int mainNum = 102;
	string str1 = "hello";
	for (int i = 0; i < str1.size(); i++) {
		cout << str1[i];
	}
	cout << endl;
	str1[1] = 'a';
	cout << str1 << endl;
	str1.at(1) = 'e';
	for (int i = 0; i < str1.size(); i++) {
		cout << str1.at(i);
	}

	return 0;
}