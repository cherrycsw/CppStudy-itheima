#include<iostream>
#include<string>
using namespace std;
//��������
//��Ա�������const���ǳ�����
//�������ڲ����޸ĳ�Ա����
//��Ա��������ʱ�ӹؼ���mutabel���ڳ���������Ȼ�����޸�

//������
//��������ǰ��const�Ƹö���Ϊ������
//������ֻ�ܵ��ó�����


class Students {
public:
	int age;
	mutable int b;//�����Ա����
	static int c;

public:
	
	void showStudents() const{//const����thisָ��
		//age = 100;//�����޸ĳ��� ��ͬ��this->age=100; 
		//this = NULL; //��thisָ��ı�����ָ�볣����Person * const this��ָ�򲻿��޸ģ��������������const��ͱ�Ϊconst Person * const this;
		b = 10; //�����Ա���Կ����޸�
	}
	void fuc() {

	}
		


};

int Students::c = 0;

int main54() {
	int mainNum = 54;
	const Students s1;//������
	//s1.age = 100;���������ͨ���Բ����޸�
	s1.b = 100; //�����Ա���Կ����޸�
	s1.c = 100;//������ľ�̬���Կ����޸ģ���Ϊ��̬���Բ�����ĳ�������ǹ����

	//������ֻ�ܵ��ó�����
	//s1.fuc();//��������ܵ�����ͨ��Ա����������ԴӲ����޸�������ԣ��볣������������
	s1.showStudents();



	return 0;

}