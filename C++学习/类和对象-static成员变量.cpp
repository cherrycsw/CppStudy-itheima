#include<iostream>
#include<string>
using namespace std;
//��̬��Ա����

class Students {
public:
	//1 ���ж��󶼹���ͬһ������
	//2 ����׶ξͷ����ڴ�
	//3 ���������������ʼ������
	static int s_age;
private:
	static int s_score;
	
public:
	void setScore(int score) {
		s_score = score;
	}

	int getScore() {
		return s_score;
	}

};

int Students::s_age = 10;//�������������ʼ��,�����
int Students::s_score=100;//˽�����������ʼ��,�����

int main50() {
	int mainNum = 50;
	Students s1;
	cout << s1.s_age << endl;
	Students s2;
	s2.s_age=20; // ���½�����ľ�̬����ֵ��Ϊ20
	cout << s1.s_age << endl;

	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ
	//1��ͨ��������з���
	//Students s3;
	//cout << s3.s_age << endl;

	//2��ͨ���������з���
	cout << Students::s_age << endl;
	//cout << Students::s_score << endl;������ʲ���˽�о�̬����

	return 0;

}