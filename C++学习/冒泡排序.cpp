#include<iostream>
#include<string>
using namespace std;

int main15() {
	//ð������
	int arr[10];
	int tmp;
	cout<< "������Ҫ�����10�����֣�";
	for (int i = 0; i < 10;i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++) {
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0])-1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	cout << "��С����������10������Ϊ��";
	for (int i = 0; i < 10; i++) {
		cout<< arr[i]<<" ";
	}

	return 0;
}