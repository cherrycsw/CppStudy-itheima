#include<iostream>
#include<string>
using namespace std;
//ˮ�ɻ�����ָһ��3λ������ÿ��λ�ϵ����ֵ�3����֮�͵�������������do...while����������3λ���е�ˮ�ɻ���
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