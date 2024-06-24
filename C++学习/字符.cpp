#include<iostream>
using namespace std;

int main2() {
	char a;
	cout << "请输入要转换的字符："<< endl;
	scanf("%c", &a);
	if (int(a) >= 97 && int(a) <= 122) {
		char b = a - 32;
		cout << "转换后的大写字母为：" << b << endl;

	}
	else {
		cout << "你的输入有误" << endl;
	}
		
	return 0;
}