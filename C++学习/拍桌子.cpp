#include<iostream>
#include<string>
using namespace std;
//从1开始到数字100，如果这个数字各位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出
int main9() {
	for (int i = 1; i <= 100;i++) {
		if (i % 10 == 7 || i/10==7||i%7==0) {
			cout << "敲桌子！" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	return 0;
}