#include<iostream>
#include<string>
using namespace std;
//��̬��C++���������������֮һ
//��̬��Ϊ����:
//��̬��̬���������غ�������������ھ�̬��̬�����ú�����
//��̬��̬����������麯��ʵ������ʱ��̬

//��̬��̬�Ͷ�̬��̬������
//��̬��̬�ĺ�����ַ���-����׶�ȷ��������ַ
//��̬��̬�ĺ�����ַ���-���н׶�ȷ��������ַ

//��̬��̬����������
//1���м̳й�ϵ
//2������Ҫ��д�����е��麯�� ������д�ĺ���virtual�ؼ��ֿ�д�ɲ�д

//��̬��̬ʹ�ã�
//�����ָ���������ָ���������


class Animal {
public:
	virtual void speak() {//�������˵��������Ϊ�麯��,�ͻ�ʵ�ֵ�ַ���
		cout << "������˵��" << endl;
	}
};

class Cat :public Animal {
public:
	virtual void speak() {//virtual�ؼ��ֿ�д�ɲ�д
		cout << "����" << endl;
	}
};

class Dog :public Animal {
public:
	void speak() {
		cout << "����" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ��� �ڱ���׶�ȷ��������ַ �����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ΰ󶨣�Ҳ���ǵ�ַ��� �������������˵��������Ϊ�麯��
void doSpeak(Animal &animal){//��̬��̬ʹ�� Animal &animal = cat; �����ָ���������ָ���������
	animal.speak();
}

int main67() {
	int mainNum = 67;
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
	
	return 0;
}