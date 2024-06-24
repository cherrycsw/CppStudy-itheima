#include<iostream>
#include<string>
using namespace std;
//类对象作为类成员

//定义学生类
class Students {
private:
	string s_name;
	/*string s_sex;
	int s_age;
	int s_score;*/

public:
	//自定义初始化
	Students(string name) :s_name(name) {
		cout << "Students构造函数调用" << endl;
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

//定义老师类
class Teachers {
private:
	string t_name;
	string t_sex;
	int t_age;
	Students t_stu;

public:
	//自定义初始化
	//Students t_stu = stu;隐式转换法
	Teachers(string name, string sex, int age, string stu) :t_name(name), t_sex(sex), t_age(age), t_stu(stu) {
		cout << "Teachers构造函数调用" << endl;
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
	//Students s("张三","男",18,100);
	Teachers t("王老师","男",40,"张三");
	//cout << p.getName() << p.getSex() << p.getAge() << endl;
	return 0;

	//结论：当其他类对象作为本类成员，构造时候先构造成员对象，再构造自身，析构顺序与之相反

} 