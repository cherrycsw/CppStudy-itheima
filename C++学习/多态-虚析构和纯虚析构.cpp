#include<iostream>
#include<string>
using namespace std;
//���⣺��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//�����ʽ���������е�����������Ϊ���������ߴ�������

//�������ʹ����������ԣ�
//1�����Խ������ָ���ͷ��������
//2������Ҫ�о���ĺ���ʵ��
//3���������ʹ�����������������Ǵ����������������ڳ����࣬�޷�ʵ��������

class Animal2 {
public:
	Animal2() {
		cout << "Animal2���캯������" << endl;
	}

	//�������������Խ������ָ���ͷ��������ʱ���ɾ�������
	/*virtual ~Animal2()
	{
		cout << "Animal2��������������" << endl;
	}*/

	virtual ~Animal2() = 0;//��������

	virtual void speak() = 0;//���麯��

	
};

Animal2::~Animal2() {//�þ���ʵ�ֲŲ�����
	cout << "Animal2����������������" << endl;
}

class Cat1 :public Animal2 {
public:
	string *m_Name;

public:
	Cat1(string name) {
		cout << "Cat1���캯������" << endl;
		m_Name = new string(name);
	}

	virtual void speak() {
		cout << *m_Name<<"����" << endl;
	}

	~Cat1()
	{
		if (m_Name != NULL) {
			cout << "Cat1������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	
};

int main72() {
	int mainNum = 72;

	Animal2 *an = new Cat1("��ķ");
	an->speak();
	delete an;

	return 0;
}