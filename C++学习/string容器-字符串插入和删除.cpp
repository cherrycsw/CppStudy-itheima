#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string�ַ��������ɾ��


int main103() {
	int mainNum = 103;
	string str1 = "hello";
	//����
	str1.insert(1,"111");//��1���±�λ�ò����ַ���"111"
	cout << str1 << endl;
	//ɾ��
	str1.erase(1,3);//��1���±�λ�ÿ�ʼɾ��3���ַ�
	cout << str1 << endl;

	return 0;
}