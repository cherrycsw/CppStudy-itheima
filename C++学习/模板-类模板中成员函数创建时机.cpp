#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//��ģ���г�Ա��������ʱ����
//��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
//��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���

class Person002 {//��ͨ��
public:
	void showPerson002() {
		cout << "Person002 show" << endl;
	}
};

class Person003 {//��ͨ��
public:
	void showPerson003() {
		cout << "Person003 show" << endl;
	}
};

template<class T>//��ģ��
class Person004 {
public:
	T obj;

public:
	void func1() {
		obj.showPerson002();
	}
	void fuc2() {
		obj.showPerson003();
	}

};

int main87() {
	int mainNum = 87;
	Person004<Person002> p;
	p.func1();
	//p.fuc2();//����
	

	return 0;

}