#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main7() {
	//ϵͳ����һ��1~100���������
	srand((unsigned int)time(NULL)); //�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	int num=rand() % 100 + 1;//�����������һ�� ��Ϊα�����
	int a = 0;
	int flag = 0;
	int count=0;
	
	while (a != num) {
		if (count < 5) {
			if (flag == 0) {
				cout << "��������²�����֣�";
				flag++;
			}
			cin >> a;
			count++;
			if (a > num) {
				cout << "��²�����ֹ���������������Ҫ�²�����֣�" << endl;

			}
			else if (a == num) {
				cout << "��ϲ��²���ȷ��" << endl;
				//break;
			}
			else {
				cout << "��²�����ֹ�С��������������Ҫ�²�����֣�" << endl;

			}
		}
		else {
			cout << "û�ڹ涨�����²¶ԣ��˳���Ϸ��" << endl;
			break; 
		}

	}
	
	return 0;
}