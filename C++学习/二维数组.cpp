#include<iostream>
#include<string>
using namespace std;

int main16() {
	//ถþฮฌสýื้
	int arr[2][3];
	cout << sizeof(arr[2][3])<<endl;
	cout << sizeof(arr) << endl;
	
	cout << arr << endl;
	cout << &arr[0][0]<< endl;
	cout << &arr[0][1] << endl;
	cout << &arr[0][2]<< endl;
	cout << &arr[1][0]<< endl;

	cout << int(&arr[0][0] )<< endl;
	cout << int(&arr[0][1] )<< endl;
	cout << int(&arr[0][2]) << endl;
	cout << int(&arr[1][0]) << endl;
	return 0;
}