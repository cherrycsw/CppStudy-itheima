#include"swap.h"

//��������
void swap(int num1, int num2) {
	int tmp = num2;
	num2 = num1;
	num1 = tmp;
	cout << "A��B�������ֵΪ��A=" << num1 << " B=" << num2 << endl;
}