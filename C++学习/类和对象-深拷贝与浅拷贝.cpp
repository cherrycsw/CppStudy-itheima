#include<iostream>
#include<string>
using namespace std;
//�����ǳ����

class Person2 {
private:
	string p_name;
	string p_sex;
	int p_age;
	int *p_height;//��߿��ٵ�����

public:
	//Ĭ�Ϲ��캯��
	Person2() {
		cout << "Person2Ĭ�Ϲ��캯������" << endl;
	}

	//�вι��캯��
	Person2(int age,int height) {
		p_age = age;
		p_height=new int(height);
		cout << "Person2Ĭ�Ϲ��캯������" << endl;
	}

	//������캯��
	Person2(const Person2 &p) {
		p_age = p.p_age;
		p_height = new int(*p.p_height);//�����µĶ��ڴ� 
		cout << "Person2�������캯������" << endl;
	}

	//��������
	~Person2()
	{
		//�������룬�����������������ͷŲ��� 
		if (p_height != NULL) {
			delete p_height;
			p_height = NULL;
		}
		cout << "Person2������������" << endl;
	}

	int getAge() {
		return p_age;
	}

	int getHeight() {
		return *p_height;
	}
};

int main47() {
	int mainNum = 47;
	Person2 p1(18,160);
	cout << "p1����Ϊ��" <<p1.getAge()<<"  ���Ϊ��"<<p1.getHeight()<< endl;

	Person2 p2(p1);//ǳ����������������Ƕ����ڴ��ظ��ͷ�
	cout << "p2����Ϊ��" << p2.getAge() << "  ���Ϊ��" << p2.getHeight() << endl;

	return 0;

}