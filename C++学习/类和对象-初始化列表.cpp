#include<iostream>
#include<string>
using namespace std;
//���ʼ���б�

class Person3 {
private:
	string p_name;
	string p_sex;
	int p_age;

public:
	//��ͳ��ʼ������
	Person3(string name,string sex,int age) {
		p_name = name;
		p_sex = sex;
		p_age = age;
	}

	//��ʼ���б��ʼ������
	Person3():p_name("����"), p_sex("��") ,p_age(18){

	}

	//���Զ���
	/*Person3(string name, string sex, int age) :p_name(name), p_sex(sex), p_age(age) {

	}*/
	
	string getName() {
		return p_name;
	}

	string getSex() {
		return p_sex;
	}
	
	int getAge() {
		return p_age;
	}
};

int main() {
	int mainNum = 48;
	//Person3 p("����", "��", 18);
	Person3 p;
	Person3 *pp = new Person3("����","Na",2);
	cout<<pp->getName()<<pp->getSex()<<pp->getAge()<<endl;
	return 0;

}