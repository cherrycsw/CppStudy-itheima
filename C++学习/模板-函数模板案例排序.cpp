#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//����ģ��-������

//��������ģ��
template<typename T>
void mySort(T &a,T &b) {
	T temp = b;
	b = a;
	a = temp;
}

//������ģ��
template<typename T>//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ�õ���������
void mySort(T &arr) {
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < arrSize;i++) {
		for (int j = 0; j < arrSize - i-1;j++) {
			if (arr[j]>arr[j+1]) {
				mySort(arr[j], arr[j + 1]);//�ڽ�����ʱ����������ⶨ��һ��ģ�庯���ͻᱨ��

			}
		}
	}
}


int main81() {
	int mainNum = 81;

	//������������
	srand((unsigned int)time(NULL)); //�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	int arr1[20];
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]);i++) {
		arr1[i] = rand() % 20 + 1;//ϵͳ����һ��1~20���������
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

	//�ַ�����������
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