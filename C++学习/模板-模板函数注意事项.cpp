#include<iostream>
#include<string>
using namespace std;

//ģ�庯��ע�����
//1���Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
//2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��


//����ģ��
template<typename T>//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ�õ���������
void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void func() {
	cout << "sfsgs" << endl;
}

int main80() {
	int mainNum = 80;
	int a = 10;
	int b = 20;
	cout << a << endl;
	cout << b << endl;
	mySwap(a, b);//�Զ������Ƶ� ��ȷ
	cout << a << endl;
	cout << b << endl;
	char c = 'c';

	//1���Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
	cout << a << endl;
	cout << c << endl;
	//mySwap(a, c);//����!���͵�һ��
	cout << a << endl;
	cout << c << endl;

	//2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
	//func();����
	func<int>();
	return 0;
}