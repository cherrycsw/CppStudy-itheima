#include<iostream>
#include<string>
using namespace std;
//��C++�г�Ա�����ͳ�Ա�����Ƿֿ��洢�ģ�ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ���Ƕ��ͬ���Ͷ�����һ����룬��һ����������ĸ�����
//�����Լ���ʱ�����Ҫ�õ�thisָ��
//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���

//���ã�
//1�����βκͳ�Ա����ͬ��ʱ������thisָ��������
//2�����ض�����

class Students {
public:
	int age;

public:
	Students(int age) {
		//age = age;//�������� ����age����ͬһ������ 
		//���βκͳ�Ա����ͬ��ʱ������thisָ��������
		this->age = age;
	}

	void studentsAddAge1(Students &s) {
		this->age = this->age + s.age;
	}

	Students& studentsAddAge2(Students &s) {
		this->age = this->age + s.age;
		return *this;//����thisָ�����ı���
	}

};

int main53() {
	int mainNum = 53;
	Students s1(18);
	cout << s1.age << endl;

	Students s2(18);
	s2.studentsAddAge1(s1);
	cout << s2.age << endl;

	Students s3(18);
	cout << s3.age << endl;
	//��ʽ���˼��
	s3.studentsAddAge2(s1).studentsAddAge2(s1).studentsAddAge2(s1);
	cout <<s3.age<< endl;

	return 0;

}