#include<iostream>
#include<string>
using namespace std;
//1���ñ�����֪��Person008��
template<class T1, class T2>
class Person008;

//2���ñ�����֪����printPerson5�������ģ�����
template<class T1, class T2>
void printPerson5(Person008<T1, T2> p) {
	cout << "����ʵ��" << endl;
	cout << p.name << endl;
	cout << p.age << endl;
}

//ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ
template<class T1,class T2>
class Person008 {

	//ȫ�ֺ�������ʵ��(����ʹ��)
	friend void printPerson1(Person008<T1,T2> p) {
		cout << "����ʵ��"<< endl;
		cout << p.name << endl;
		cout << p.age << endl;
	}

	//3��ȫ�ֺ�������ʵ�� �üӿղ����б�
	friend void printPerson5<>(Person008<T1, T2> p);

public:
	Person008(T1 name,T2 age) {
		this->name = name;
		this->age = age;
	}

private:
	T1 name;
	T2 age;
};



int main92() {
	int mainNum = 92;
	Person008<string,int> p("����",12);
	printPerson1(p);
	printPerson5(p);
	return 0;

}