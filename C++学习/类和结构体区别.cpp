#include<iostream>
#include<string>
using namespace std;

//C++����(class)�ͽṹ��(struct)��Ψһ����Ĭ�Ϸ���Ȩ�޲�ͬ
//classĬ�Ϸ���Ȩ��˽�е�
//structĬ�Ϸ���Ȩ�޹�����

class Students1 {
	int id;
};

struct Students2 {
	int id;
};

int main40() {
	int mainNum = 40;

	Students1 stu1;
	Students2 stu2;
	//stu1.id = 10;
	stu2.id = 10;

	return 0;
}