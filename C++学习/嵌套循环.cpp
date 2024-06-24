#include<iostream>
#include<string>
using namespace std;
//从1开始到数字100，如果这个数字各位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出
int main10() {
	for (int i = 0; i <10; i++) {
		for (int j = 0; j < 10; j++) {
			cout <<"* ";
		}
		cout << endl;
	}

	return 0;
}