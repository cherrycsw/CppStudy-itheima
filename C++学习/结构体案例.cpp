#include<iostream>
#include<string>
using namespace std;
/*����������
ѧУ������������Ŀ��ÿ����ʦ��5��ѧ�����ܹ���3����ʦ���������£�
���ѧ������ʦ�ṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա��
ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
���մ�ӡ����ʦ�����Լ���ʦ����ѧ������
*/


//ѧ���ṹ��
struct Students {
	//��Ա�б�
	string name;//����
	int score;//���Է���
};

//��ʦ�ṹ��
struct Teacher {
	string name;
	Students stu[5];
};

//��ֵ����
void setValue(Teacher *tea,int len) {

	for (int i = 1; i <= len;i++) {
		string teaName;
		cout << "�������" << i << "����ʦ��������";
		cin >> teaName;
		tea->name = teaName;

		for (int j = 0; j < 5; j++) {
			string stuName;
			int stuScore;

			cout << "�������" << i << "����ʦ����ѧ��"<< j+1<<"��������";
			cin >> stuName;
			tea->stu[j].name = stuName;

			cout << "�������" << i << "����ʦ����ѧ��" << j + 1 << "�ĳɼ���";
			cin >> stuScore;
			tea->stu[j].score = stuScore;
		}

		tea++;

	}

}


int main29() {
	Teacher tea[3];
	int len = sizeof(tea)/ sizeof(tea[0]);

	setValue(tea,len);
	for (int i = 0; i < len;i++) {
		cout << "��" << i + 1 << "����ʦ������Ϊ��" << tea[i].name << endl;
		for (int j = 0; j < 5;j++) {
			cout << "��" << i+1 << "����ʦ����ѧ��" << j + 1 << "������Ϊ��"<<tea[i].stu[j].name<<"  ����Ϊ��"<< tea[i].stu[j].score<<endl;
		}
	}


	return 0;
}