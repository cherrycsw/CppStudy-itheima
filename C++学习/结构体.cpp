#include<iostream>
#include<string>
using namespace std;

//�Զ�����������
struct Students {
	//��Ա�б�
	string name;
	int age;
	int score;
}c;

int main24() {
	//��������ѧ��
	//��ʽһ:
	struct Students a;
	a.name = "����";
	a.age = 18;
	a.score = 90;
	cout << "������"<< a.name << " ���䣺" << a.age << " �ɼ���" << a.score << endl;

	//��ʽ��:
	struct Students b = { "����",20,95 };
	cout << "������" << b.name << " ���䣺" << b.age << " �ɼ���" << b.score << endl;

	//��ʽ��:�����ṹ���ʱ��˳�㴴���ṹ�����
	c.name = "����";
	c.age = 22;
	c.score = 100;
	cout << "������" << c.name << " ���䣺" << c.age << " �ɼ���" << c.score << endl;

	return 0;
}