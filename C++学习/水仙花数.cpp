#include<iostream>
#include<string>
using namespace std;
//水仙花数是指一个3位数，且每个位上的数字的3次幂之和等于它本身，请用do...while语句求出所有3位数中的水仙花数
int main8() {
	int num=100;
	do {
		if ((pow((num / 100), 3) + pow(num % 100 / 10, 3) + pow(num % 10, 3) )== num) {
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	return 0;
}