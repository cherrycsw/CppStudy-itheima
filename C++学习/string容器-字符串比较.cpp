#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string�Ƚ� ����ASCII��Ƚ�



int main101() {
	int mainNum = 101;
	string str1 = "hello";
	string str2 = "hello";
	if (str1.compare(str2)==0) {
		cout<<"str1����str2"<<endl;
	}
	else if (str1.compare(str2) > 0) {//���岻��
		cout << "str1����str2" << endl;
	}
	else {
		cout << "str1С��str2" << endl;
	}

	return 0;
}