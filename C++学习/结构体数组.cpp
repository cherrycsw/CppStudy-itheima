#include<iostream>
#include<string>
using namespace std;

//�ṹ������
struct Students {
	//��Ա�б�
	string name;
	int age;
	int score;
};

int main25() {
	//�����ṹ������

	struct Students a[3] = { {"����",18,90},{"����",20,95},{"����",22,100} };

	Students b[3] = { {"����",18,90},{"����",20,95},{"����",22,100} };

	for (int i = 0; i < 3;i++) {
		cout << "������" << a[i].name << " ���䣺" << a[i].age << " �ɼ���" << a[i].score << endl;
	}

	for (int i = 0; i < 3; i++) {
		cout << "������" << b[i].name << " ���䣺" << b[i].age << " �ɼ���" << b[i].score << endl;
	}

	return 0;
}