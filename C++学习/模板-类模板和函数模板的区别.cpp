#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//��ģ��ͺ���ģ�������
//1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//2����ģ����ģ������б��п�����Ĭ�ϲ���

template<typename T=int, typename K>//����ģ����ģ������б��п�����Ĭ�ϲ���
void  print(T &a,K &b) {
	T c = a;
	K d = b;
	cout <<c<< endl;
	cout << d<< endl;
}

template<class NameType, class AgeType = int>//��ģ����ģ������б��п�����Ĭ�ϲ���
class Person002 {
public:
	Person002(NameType name, AgeType age) {
		this->name = name;
		this->age = age;
	}

	void showinfo() {
		cout << this->name << endl;
		cout << this->age << endl;
	}

public:
	NameType name;
	AgeType age;
};

int main86() {
	int mainNum = 86;
	int a = 10;
	int b = 20;
	char c1 = 'a';
	char c2 = 'b';
	//Person002 p1("Ѱ���", 55);//���������Զ������Ƶ�
	print(a, c1);//����������ģ�����Զ������Ƶ�
	Person002<string,int> p1("Ѱ���", 55);//��ȷ
	p1.showinfo();

	Person002<string> p2("��˽�", 99);
	p2.showinfo();

	return 0;

}