#include<iostream>
using namespace std;

int main2() {
	char a;
	cout << "������Ҫת�����ַ���"<< endl;
	scanf("%c", &a);
	if (int(a) >= 97 && int(a) <= 122) {
		char b = a - 32;
		cout << "ת����Ĵ�д��ĸΪ��" << b << endl;

	}
	else {
		cout << "�����������" << endl;
	}
		
	return 0;
}