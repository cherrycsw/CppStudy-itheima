#include<iostream>
#include<string>
using namespace std;
//�̳��е�ͬ����̬��Ա����ʽ

class Base {
public:
	static int m_A;//��̬��Ա���� �������������ʼ��

	static void func() {
		cout << "Base-func()" << endl;//��̬��Ա����
	}
};
int Base::m_A=100;

class Son4 :public Base {
public:
	static int m_A;

	static void func() {
		cout << "Son4-func()" << endl;//��̬��Ա����
	}
};
int Son4::m_A = 200;

int main65() {
	int mainNum = 65;
	//1��ͨ��������ʾ�̬��Ա����
	Son4 s;
	cout << "m_A=" << s.m_A << endl;
	cout << "m_A=" << s.Base::m_A << endl;
	Base b;
	cout << "m_A=" << b.m_A << endl;

	//2��ͨ���������ʾ�̬��Ա����
	cout << Son4::m_A << endl;//��һ��::ͨ����������
	cout << Son4::Base::m_A << endl;//��һ��::ͨ����������,�ڶ���::������ʸ���������
	cout << Base::m_A << endl;//��һ��::ͨ����������

	//1��ͨ��������ʾ�̬��Ա����
	s.func();
	b.func();
	s.Base::func();

	//2��ͨ���������ʾ�̬��Ա����
	Son4::func();
	Base::func();
	Son4::Base::func();
	//�ܽ᣺
	//�̳еĺô��������ظ�����
	//�﷨��class ����(������)�� : �̳з�ʽ ����(����)��

	return 0;
}