#include<iostream>
#include<string>
using namespace std;
//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Students {
public:
	static int s_a;
	int s_b;
public:
	static void func() {
		s_a = 100;
		//s_b = 200;//���� ��̬��Ա���������Է��ʷǾ�̬��Ա�������޷��������ĸ������
		cout << "��̬��Ա��������" << endl;
	}

};

int Students::s_a = 10;//�����ʼ��

int main51() {
	int mainNum = 51;
	//1��ͨ���������
	Students s;
	s.func();
	//2��ͨ����������
	Students::func();
	return 0;

}