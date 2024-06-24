#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//函数模板-排序案例

//交换函数模板
template<typename T>
void mySort(T &a,T &b) {
	T temp = b;
	b = a;
	a = temp;
}

//排序函数模板
template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用的数据类型
void mySort(T &arr) {
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < arrSize;i++) {
		for (int j = 0; j < arrSize - i-1;j++) {
			if (arr[j]>arr[j+1]) {
				mySort(arr[j], arr[j + 1]);//在交换的时候如果不另外定义一个模板函数就会报错

			}
		}
	}
}


int main81() {
	int mainNum = 81;

	//整形数组排序
	srand((unsigned int)time(NULL)); //添加随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样
	int arr1[20];
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]);i++) {
		arr1[i] = rand() % 20 + 1;//系统生成一个1~20的随机整数
	}
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		cout << arr1[i] <<" ";
	}
	cout << endl;

	mySort(arr1);

	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;

	//字符型数组排序
	char arr2[] = "lkrhdbcfiwadx";
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;

	mySort(arr2);

	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
		cout << arr2[i] << " ";
	}
	
	return 0;
}