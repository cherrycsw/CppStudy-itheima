#include<iostream>
#include<string>
using namespace std;
//��C++�У���Ա���� ��Ա�����ֿ��洢
//ֻ�зǾ�̬��Ա������������Ķ���(��Ķ�����ռ�õĿռ���ǷǾ�̬��Ա������ռ�ռ��С)

class Students1 {


};

class Students2 {
public:
	static int s_a;
	int s_b;
public:
	void func() {
		
		cout << "�Ǿ�̬��Ա��������" << endl;
	}

};

int Students2::s_a = 0;//�����ʼ��

int main52() {
	int mainNum = 52;
	Students1 s1;
	cout << "size of s1=" <<sizeof(s1)<< endl;
	//���ۣ��ն���ռ���ڴ�ռ�Ϊ��1��C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ�ã�ÿ���ն���ҲӦ���ж�һ�޶����ڴ��ַ

	Students2 s2;
	cout << "size of s2=" << sizeof(s2) << endl;//��Ķ�����ռ�õĿռ���ǷǾ�̬��Ա������ռ�ռ��С
	return 0;

}  