#include<iostream>
#include<string>
using namespace std;
//�����������������()
//���غ�ĺ��������º���
//�º����ǳ����,û�й̶�д��
class Myprint{
public:

	//���غ������������()
	void operator()(string text) {
		cout << text << endl;
	}


};

void print2(string text) {
	cout << text << endl;
}


int main62() {
	int mainNum = 62;
	Myprint print;
	//print()"hello";Υ��
	print("hello1");//����ʹ�������ǳ������ں�������,��˳�Ϊ�º���
	print2("hello2");

	//�����������
	Myprint()("hello3");
	

	return 0;
}