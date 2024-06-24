#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string比较 根据ASCII码比较



int main101() {
	int mainNum = 101;
	string str1 = "hello";
	string str2 = "hello";
	if (str1.compare(str2)==0) {
		cout<<"str1等于str2"<<endl;
	}
	else if (str1.compare(str2) > 0) {//意义不大
		cout << "str1大于str2" << endl;
	}
	else {
		cout << "str1小于str2" << endl;
	}

	return 0;
}