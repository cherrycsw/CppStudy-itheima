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

//����Ϊ�ṹ��ָ������ֻ�ܶ��β����ݽ����޸�
void printStudent1(Students stu) {
	stu.age = 100;
	cout << "�Ӻ���1��� ������" << stu.name << " ���䣺" << stu.age << " �ɼ���" << stu.score << endl;
}

//����Ϊ�ṹ��ָ�룬���Զ�ʵ�����ݽ����޸ģ�����ָ����ռ�ռ��С�����Լ����ڴ�ռ䣬���Ḵ���µĸ�������
void printStudent2(Students *stu) {
	stu->age = 100;
	cout << "�Ӻ���2���������" << stu->name << " ���䣺" << stu->age << " �ɼ���" << stu->score << endl;
}

//const���νṹ��
void printStudent3(const Students *stu) {
	//stu->age = 100;//����const��һ���޸ľͻᱨ���ɷ�ֹ�����
	cout << "�Ӻ���3���������" << stu->name << " ���䣺" << stu->age << " �ɼ���" << stu->score << endl;
}


int main28() {
	Students a = { "����",18,90 };
	printStudent1(a);
	cout << "������1��� ������" << a.name << " ���䣺" << a.age << " �ɼ���" << a.score << endl;
	printStudent2(&a);
	cout << "������2��� ������" << a.name << " ���䣺" << a.age << " �ɼ���" << a.score << endl;
	const Students b = { "����",20,95 };
	printStudent1(b);
	//printStudent2(&b);�β����Ͳ�ƥ�䱨��
	printStudent3(&b);

	return 0;
}