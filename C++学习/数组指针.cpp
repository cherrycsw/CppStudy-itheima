#include<iostream>
#include<string>
using namespace std;

int main21() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << arr << endl;
	cout << &arr[0] << endl;
	int* p = arr;
	cout <<p << endl;
	for (int i = 0; i < 10; i++) {
		cout << *p << endl;
		p++;
	}
	
	return 0;
}