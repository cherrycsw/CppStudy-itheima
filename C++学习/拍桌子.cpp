#include<iostream>
#include<string>
using namespace std;
//��1��ʼ������100�����������ָ�λ����7����������ʮλ����7�����߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ���
int main9() {
	for (int i = 1; i <= 100;i++) {
		if (i % 10 == 7 || i/10==7||i%7==0) {
			cout << "�����ӣ�" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	return 0;
}