#include<iostream>
#include<string>
using namespace std;

int main17() {
	/*
	������ͬѧ�����������ġ����壩���ɼ����£�
	          ����      ��ѧ      Ӣ��
	����      100       100	      100

	����      90        50        100

	����      60        70        80
	��ֱ������λͬѧ���ܳɼ���
	*/
	int arr[3][3] = 
	{ 
		{100,100,100},
		{90, 50, 100},
	    {60, 70, 80}
	};
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum += arr[i][j];
		}
		switch (i)
		{
		case 0:
			cout << "�������ܳɼ�Ϊ��" << sum << endl;
			break;
		case 1:
			cout << "���ĵ��ܳɼ�Ϊ��" << sum << endl;
			break;
		default:
			cout << "������ܳɼ�Ϊ��" << sum << endl;
			break;
		}
		sum = 0;
	}
	return 0;
}