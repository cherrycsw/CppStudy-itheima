#include<iostream>
#include<string>
using namespace std;

int main5() {
	
	int score;
	cout <<"��������ķ���:" << endl;
	cin >> score;
	cout << "������ķ���Ϊ:"<<score << endl;

	if (score>600) {
		cout << "��ϲ������һ����ѧ��" << endl;
	}
	else if(score>500){
		cout << "��ϲ�����������ѧ��" << endl;
	}
	else if (score > 400) {
		cout << "��ϲ������������ѧ��" << endl;
	}
	else {
		cout << "���ź���δ�ܿ��ϱ��ƣ�����Ŭ����" << endl;
	}
	

	return 0;
}