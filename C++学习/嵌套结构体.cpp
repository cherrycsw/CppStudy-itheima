#include<iostream>
#include<string>
using namespace std;

//ѧ���ṹ��
struct Students {
	//��Ա�б�
	string name;//����
	int age;//����
	int score;//�ɼ�
};

//��ʦ�ṹ��
struct Teacher1 {
	int id;//ְ�����
	string name;//��ʦ����
	int age;//����
	Students stu;//����ѧ�����ӽṹ��
};
//��ʦָ��ṹ��
struct Teacher2 {
	int id;//ְ�����
	string name;//��ʦ����
	int age;//����
	Students *stu;//����ѧ�����ӽṹ��
};

int main27() {
	//1�������ṹ�����
	Students a = { "����",18,90 };
	Teacher1 b = { 001,"����ʦ",40, {"����",20,95} };
	Teacher2 c = { 001,"����ʦ",40, &a };
	cout << "��ʦ��ţ�" <<b.id << " ��ʦ������" << b.name<< " ��ʦ���䣺" << b.age << " ��ʦ����ѧ����" << b.stu.name << endl;

	//2��ͨ��ָ��ָ��ṹ�����
	Teacher2 *p = &c;
	//3��ͨ��ָ����ʽṹ������е�����
	
	cout << "��ʦ��ţ�" << p->id << " ��ʦ������" << p->name << " ��ʦ���䣺" << p->age <<" ��ʦ����ѧ����"<<p->stu->name<< endl;

	return 0;
}