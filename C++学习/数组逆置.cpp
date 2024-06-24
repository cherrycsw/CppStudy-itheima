#include<iostream>
#include<string>
using namespace std;

int main14() {
	//数组逆置
	int arr[5] = { 1,2,3,4,5 };
	int tmp;
	int length = sizeof(arr) / sizeof(arr[0]);
	cout << "原始数组为：" << endl;
	for (int m = 0; m < length;m++) {
		cout << arr[m] << " ";

	}
	for (int i = 1; i <= length / 2; i++) {
		 tmp= arr[length - i] ;
		 arr[length - i] =arr[i - 1];
		 arr[i - 1] = tmp;
	}
	cout << endl;
	cout << "逆置后的数组为：" << endl;
	for (int n = 0; n < length; n++) {
		cout << arr[n] << " ";

	}
	return 0;

}