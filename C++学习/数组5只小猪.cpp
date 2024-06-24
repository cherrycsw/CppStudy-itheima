#include<iostream>
#include<string>
using namespace std;
//跳转goto
int main13() {
	//打印最重的小猪体重
	int pig[5];
	cout << "请输入五只小猪的体重" << endl;
	for (int i = 0; i < 5;i++) {
		cout << "请输入小猪" << i+1 << "的体重：" ;
		cin >> pig[i];

	}

	//比大小
	int tmp = 0;
	for (int j = 0; j < 5; j++) {
		if (pig[j] > tmp) {
			tmp = pig[j];
		}
	}
	for (int k = 0; k < 5;k++) {
		if (pig[k] == tmp)
			cout << "小猪" << k+1 << "的体重最重，最重为："<< pig[k]<<"kg"<<endl;
	}
	return 0;
}