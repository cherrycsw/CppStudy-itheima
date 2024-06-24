#include<iostream>
#include<string>
using namespace std;

//ģ�壺C++��һ�ֱ��˼��Ϊ���ͱ�̣���Ҫ���õļ�������ģ��
//C++�ṩ����ģ����ƣ�����ģ�����ģ��

//����ģ������ã�����һ��ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ������ƶ�����һ�����������������

//�����������κ���
void swapInt(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//�������������ͺ���
void swapDouble(double &a, double &b) {
	double temp = a;
	a = b;
	b = temp;
}

//����ģ��
template<typename T>//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ�õ���������

void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

int main79() {
	int mainNum = 79;
	int a = 10;
	int b = 20;
	cout << a << endl;
	cout << b << endl;
	//swapInt(a, b);
	//���ú���ģ�彻��
	mySwap(a, b);//1���Զ������Ƶ�
	mySwap<int>(a, b);//1����ʾָ������
	cout << a << endl;
	cout << b << endl;

	double c = 1.1;
	double d = 2.3;
	cout << c<< endl;
	cout << d << endl;
	mySwap(c, d);
	cout << c << endl;
	cout << d<< endl;

	cout << c << endl;
	cout << a << endl;
	//mySwap(c, a);//���� SWap��������������������Ҫһ��
	cout << c << endl;
	cout << a << endl;

	return 0;
}