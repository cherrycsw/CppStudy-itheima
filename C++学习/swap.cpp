#include"swap.h"

//函数定义
void swap(int num1, int num2) {
	int tmp = num2;
	num2 = num1;
	num1 = tmp;
	cout << "A，B交换后的值为：A=" << num1 << " B=" << num2 << endl;
}