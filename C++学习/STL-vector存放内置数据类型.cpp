#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector���������������

void myPrint(int val) {
	cout << val << endl;
}
int main94() {
	int mainNum = 94;
	//����һ��vector����������
	vector<int> myArray;

	//�������в�������
	myArray.push_back(19);
	myArray.push_back(20);

	//ͨ�����������������е�����
	//��һ�ֱ�����ʽ���鷳��
	vector<int>::iterator itBegin = myArray.begin();//��ʼ������ ָ�������еĵ�һ��Ԫ��
	vector<int>::iterator itEnd = myArray.end();//���������� ָ�����������Ԫ�ص���һ��λ��
	while (itBegin!= itEnd) {
		cout << *itBegin << endl;//����������һ��ʼ���԰�������ָ��
		itBegin++;
	}

	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = myArray.begin(); it != myArray.end(); it++) {
		cout << *it << endl;
	}

	//�����ֱ�����ʽ������STL���ṩ�ı����㷨
	for_each(myArray.begin(), myArray.end(), myPrint);

	return 0;

}