#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string����:string��C++�����ַ�������string��������һ����

//string��char*������
//char *��һ��ָ��
//string��һ���࣬�ڲ���װ��char *����������ַ�������һ��char*�͵�����

//�ص㣺string�ڲ���װ�˺ܶ��Ա����
//���磺����find������copy��ɾ��delete���滻replace������insert
//string����char*��������ڴ棬���õ��ĸ���Խ���ȡֵԽ��ȣ������ڲ����и���

//���캯��ԭ�ͣ�
//string();                 ����һ���յ��ַ��������磺string str;
//string(const char* s);    ʹ���ַ���s��ʼ��
//string(const string &str); ʹ��һ��string�����ʼ����һ��string���󣬿�������
//string(int n,char c);     ʹ��n���ַ�c��ʼ��

int main97() {
	int mainNum = 97;
	string s1;//Ĭ�Ϲ���
	string s2("hello");
	cout << s2 << endl;
	string s3(s2);
	cout << s3 << endl;
	string s4(10,'a');
	cout << s4 << endl;
	return 0;
}