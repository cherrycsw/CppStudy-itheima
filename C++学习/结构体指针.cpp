#include<iostream>
#include<string>
using namespace std;

//�ṹ��ָ��
struct Students {
	//��Ա�б�
	string name;
	int age;
	int score;
};

int main26() {
	//1�������ṹ�����
	Students a = { "����",18,90};
	//2��ͨ��ָ��ָ��ṹ�����
	Students *p = &a;
	//3��ͨ��ָ����ʽṹ������е�����
	cout << "������" << p->name << " ���䣺" << p->age << " �ɼ���" << p->score << endl;

	//1�������ṹ���������
	Students b[3] = { {"����",18,90},{"����",20,95},{"����",22,100} };
	//2��ͨ��ָ��ָ��ṹ�����
	Students *q = b;
	//3��ͨ��ָ����ʽṹ������е�����
	int i = 0;
	cout << q << endl;
	while (i < 3) {
		cout << "������" << q->name << " ���䣺" << q->age << " �ɼ���" << q->score << endl;
		i++;
		q++;
	}

	return 0;
}