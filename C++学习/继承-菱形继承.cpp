#include<iostream>
#include<string>
using namespace std;
//���μ̳� ������̳п��Խ�����μ̳д���������

class Animal {
public:
	int m_A;
};

class Sheep :virtual public Animal {

};

class Tuo :virtual public Animal {

};

class SheepTuo :public Sheep, public Tuo {

};

int main66() {
	int mainNum = 66;
	
	SheepTuo st;
	//st.m_A = 10;//�������������� ��֪���Ƕ�Sheep�����Ը�ֵ���Ƕ�Tuo�����Ը�ֵ
	st.Sheep::m_A = 10;
	st.Tuo::m_A = 20;
	cout << st.Sheep::m_A << endl;
	cout << st.Tuo::m_A << endl;
	cout << st.m_A << endl;//��̳к�Ͳ��ᱨ��
	//SheepTuo�����������m_A���ԣ�������Դ�˷� ������̳п��Խ�����μ̳д���������

	//�ܽ᣺��̳м̳е���������ָ�룬�����������Ծ��Ǹ��������ָ�����ƫ�����ҵ����������ԣ��Ӷ�����ʼ��������๲��һ������
	return 0;
}