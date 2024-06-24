#include<iostream>
#include<string>
using namespace std;

int * function() {
	int *p = new int(10);//堆区手动开辟内存
	return p;
}

void test1() {
	int *p = function();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << p << endl;
	delete p;//堆区手动释放内存
	cout << p << endl;
	cout << *p << endl;
}

//new数组
void test2() {
	int * arr=new int[10];//10代表数组有10个元素
	for (int i = 0; i < 10;i++) {
		 arr[i]=i+100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;//释放数组数据

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	
}

int main32() {
	//二维数组
	test1();
	test2();
	return 0;
}