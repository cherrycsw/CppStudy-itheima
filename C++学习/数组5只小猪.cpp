#include<iostream>
#include<string>
using namespace std;
//��תgoto
int main13() {
	//��ӡ���ص�С������
	int pig[5];
	cout << "��������ֻС�������" << endl;
	for (int i = 0; i < 5;i++) {
		cout << "������С��" << i+1 << "�����أ�" ;
		cin >> pig[i];

	}

	//�ȴ�С
	int tmp = 0;
	for (int j = 0; j < 5; j++) {
		if (pig[j] > tmp) {
			tmp = pig[j];
		}
	}
	for (int k = 0; k < 5;k++) {
		if (pig[k] == tmp)
			cout << "С��" << k+1 << "���������أ�����Ϊ��"<< pig[k]<<"kg"<<endl;
	}
	return 0;
}