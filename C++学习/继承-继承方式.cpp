#include<iostream>
#include<string>
using namespace std;
//�̳з�ʽ

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//�����̳�
class Son1 :public Base {
public:
	void func() {
		m_A = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ�� �������ⶼ�ɷ���
		m_B = 10;//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ�� ���ڿ��Է��� ���ⲻ�ɷ���
		//m_C = 10;//���� �����е�˽��Ȩ�޳�Ա ������ʲ���
	}
};

//�����̳�
class Son2 :protected Base {
public:
	void func() {
		m_A = 10;//�����еĹ���Ȩ�޳�Ա ���������Ǳ���Ȩ�� ���ڿ��Է��� ���ⲻ�ɷ���
		m_B = 10;//�����еı���Ȩ�޳�Ա ���������Ǳ���Ȩ�� ���ڿ��Է��� ���ⲻ�ɷ���
		//m_C = 10;//���� �����е�˽��Ȩ�޳�Ա ������ʲ���
	}
};

//˽�м̳�
class Son3 :private Base {
public:
	void func() {
		m_A = 10;//�����еĹ���Ȩ�޳�Ա ����������˽��Ȩ�� ���ڿ��Է��� ���ⲻ�ɷ���
		m_B = 10;//�����еı���Ȩ�޳�Ա ����������˽��Ȩ�� ���ڿ��Է��� ���ⲻ�ɷ���
		//m_C = 10;//���� �����е�˽��Ȩ�޳�Ա ������ʲ���
	}
};

//Son3������ ��֤Son3��������Զ���private
class GrandSon3 :public Son3 {
	void func() {
		//m_A = 10;//��Son3�и����Ա�Ϊ˽�У���ʹ��Son3�Ķ���Ҳ���ʲ���
		//m_B = 10;
	}
};

int main64() {
	int mainNum = 64;
	Son1 son1;
	son1.m_A = 100;//public ������Է���
	//son.m_B = 100;//protected ������ʲ���

	Son2 son2;
	//son2.m_A = 100;//protected ������ʲ���
	//son2.m_B = 100;//protected ������ʲ���

	Son3 son3;
	//son2.m_A = 100;//private ������ʲ���
	//son2.m_B = 100;//private ������ʲ���
	
	//�ܽ᣺
	//�̳еĺô��������ظ�����
	//�﷨��class ����(������)�� : �̳з�ʽ ����(����)��

	return 0;
}