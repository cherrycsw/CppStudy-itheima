#include<iostream>
#include<string>
using namespace std;


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
void doSpeak1(Animal &animal) {//��̬��̬ʹ�� Animal &animal = cat; �����ָ���������ָ���������
	animal.speak();
}


int main68() {
	int mainNum = 68;
	Cat cat;
	doSpeak1(cat);
	Dog dog;
	doSpeak1(dog);
	cout << "sizeof Animal=" << sizeof(Animal) << endl;//���෽��û��virtual�ؼ���ʱ ���зǾ�̬��Ա����������������Ƿֿ��洢�� ������Ĵ�С���ǷǾ�̬��Ա�����Ĵ�С û�зǾ�̬��Ա����ʱ��Ĵ�С��Ϊ1 ռλ�ַ�����������
														//����virtual�ؼ���ʱ ����Ĵ�С���ǣ��麯��ָ�룩vfptr�Ĵ�СΪ4���ֽ� �麯��ָ��ָ�����麯����ַ ������̳и����ʱ��Ҳ��̳и����麯����ַ������д
														//�麯����ַ�е��麯����ʵ�����ຯ���Ĺ��� ���Ե�Animal &animal = catʱ������ͻ��Ϊ����Ķ���
	return 0;
}