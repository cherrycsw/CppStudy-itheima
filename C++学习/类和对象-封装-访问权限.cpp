#include<iostream>
#include<string>
using namespace std;

//����Ȩ��
//����Ȩ��  public     ���ڿ��Է���  ������Է���
//����Ȩ��  protected  ���ڿ��Է���  ���ⲻ�ɷ���  �̳У����ӿ��Է��ʸ����еı�������
//˽��Ȩ��  private    ���ڿ��Է���  ���ⲻ�ɷ���		 ���Ӳ����Է��ʸ��׵�˽������

class Students {
public:
	string s_name;

protected:
	string s_address;

private:
	int s_password;

public:
	//��ֵ
	Students() {
		s_name = "����";
		s_address = "�人";
		s_password = 123456;
	}
};

int main39() {
	int mainNum = 39;

	Students stu; 
	//stu.s_password= 123;
	cout << stu.s_name << endl;
	
	return 0;
}