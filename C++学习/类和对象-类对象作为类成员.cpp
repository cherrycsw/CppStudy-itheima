#include<iostream>
#include<string>
using namespace std;
//�������Ϊ���Ա

//����ѧ����
class Students {
private:
	string s_name;
	/*string s_sex;
	int s_age;
	int s_score;*/

public:
	//�Զ����ʼ��
	Students(string name) :s_name(name) {
		cout << "Students���캯������" << endl;
	}

	string getName() {
		return s_name;
	}

	/*string getSex() {
		return s_sex;
	}

	int getAge() {
		return s_age;
	}

	int getScore() {
		return s_score;
	}*/
};

//������ʦ��
class Teachers {
private:
	string t_name;
	string t_sex;
	int t_age;
	Students t_stu;

public:
	//�Զ����ʼ��
	//Students t_stu = stu;��ʽת����
	Teachers(string name, string sex, int age, string stu) :t_name(name), t_sex(sex), t_age(age), t_stu(stu) {
		cout << "Teachers���캯������" << endl;
	}

	string getName() {
		return t_name;
	}

	string getSex() {
		return t_sex;
	}

	int getAge() {
		return t_age;
	}

	Students getScore() {
		return t_stu;
	}
};

int main49() {
	int mainNum = 49;
	//Students s("����","��",18,100);
	Teachers t("����ʦ","��",40,"����");
	//cout << p.getName() << p.getSex() << p.getAge() << endl;
	return 0;

	//���ۣ��������������Ϊ�����Ա������ʱ���ȹ����Ա�����ٹ�����������˳����֮�෴

} 