#include<iostream>
using namespace std;

//方法一：
void bubbleSort(int *arr,int len) {
	
	for (int i = 0; i < len;i++) {
		int *tmparr = arr;
		for (int j = 0; j < len - i - 1;j++) {
			if (*tmparr > *(tmparr+1)) {
				int tmp = *(tmparr + 1);
				*(tmparr + 1) = *tmparr;
				*tmparr = tmp;
			}
			tmparr=tmparr+1;
		}
	}
}

//方法二：
void bubbleSort2(int *arr, int len) {

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j]>arr[j+1]) {
				int tmp= arr[j + 1];
				arr[j + 1]=arr[j];
				arr[j] = tmp;
			}
		}
	}
}
int main23() {
	int arr1[10] = {3,2,7,9,5,23,1,16,22,10};
	int arr2[10] = { 3,2,7,9,5,23,1,16,22,10 };
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	bubbleSort(arr1, len1);
	bubbleSort2(arr2, len2);
	for (int i = 0; i < len1;i++) {
		cout << arr1[i] << endl;
	}
	for (int i = 0; i < len2; i++) {
		cout << arr2[i] << endl;
	}
	return 0;
}