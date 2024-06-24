#include<iostream>
#include<string>
using namespace std;
//��̬����2��������Ʒ

class MakeDrink {
public:
	virtual void boilWater() = 0;//��ˮ
	virtual void brew()= 0;//����
	virtual void pourInCup() = 0;//���뱭��
	virtual void putSometing() = 0;//���븨��

	void makeDrink() {//������Ʒ��������
		boilWater();
		brew();
		pourInCup();
		putSometing();
	}
};
class MakeCoffee :public MakeDrink {//��������
public:
	virtual void boilWater() {//��ˮ
		cout << "��ũ��ɽȪ"<< endl;
	}
	virtual void brew() {//����
		cout << "���ݿ���" << endl;
	}
	virtual void pourInCup() {//���뱭��
		cout << "�����ݺõĿ��ȵ��뱭��" << endl;
	}
	virtual void putSometing() {//���븨��
		cout << "�����Ǻ�ţ��" << endl;
	}
};

class MakeTea :public MakeDrink {//������ˮ
public:
	virtual void boilWater() {//��ˮ
		cout << "��ũ��ɽȪ" << endl;
	}
	virtual void brew() {//����
		cout << "���ݲ�Ҷ" << endl;
	}
	virtual void pourInCup() {//���뱭��
		cout << "�����ݺõĲ�ˮ���뱭��" << endl;
	}
	virtual void putSometing() {//���븨��
		cout << "��������" << endl;
	}
};

void doWork(MakeDrink *md){
	md->makeDrink();
	delete md;//�ͷ�
}

int main71() {
	int mainNum = 71;
	
	doWork(new MakeCoffee);//��������
	cout << "--------------------" << endl;
	doWork(new MakeTea);//������ˮ

	return 0;
}