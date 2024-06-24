#include<iostream>
#include<string>
using namespace std;
//深初始化列表

class Person3 {
private:
	string p_name;
	string p_sex;
	int p_age;

public:
	//传统初始化操作
	Person3(string name,string sex,int age) {
		p_name = name;
		p_sex = sex;
		p_age = age;
	}

	//初始化列表初始化属性
	Person3():p_name("张三"), p_sex("男") ,p_age(18){

	}

	//或自定义
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
	//Person3 p("张三", "男", 18);
	Person3 p;
	Person3 *pp = new Person3("李四","Na",2);
	cout<<pp->getName()<<pp->getSex()<<pp->getAge()<<endl;
	return 0;

}