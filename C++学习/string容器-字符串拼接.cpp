#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//stringƴ�Ӳ���


int main99() {
	int mainNum = 99;
	string str1 = "��";
	str1 += "������Ϸ";
	cout << str1 << endl;
	str1 += ":";
	cout << str1 << endl;
	string str2 = "LOL DNF";
	str1 += str2;
	cout << str1 << endl;

	string str3 = "I";
	str3.append(" Love");
	cout << str3<< endl;
	str3.append(" Game abc",5);//���ַ�����ǰ5���ַ�β�ӵ�str3
	cout << str3 << endl;
	str3.append(str2, 3, 4);//��str2���±�Ϊ3��λ�ÿ�ʼ��ȡ4���ַ�β�ӵ�str3
	cout << str3 << endl;
	return 0;
}