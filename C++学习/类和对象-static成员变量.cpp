#include<iostream>
#include<string>
using namespace std;
//静态成员变量

class Students {
public:
	//1 所有对象都共享同一份数据
	//2 编译阶段就分配内存
	//3 类内声明，类外初始化操作
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

int Students::s_age = 10;//共有属性类外初始化,必须的
int Students::s_score=100;//私有属性类外初始化,必须的

int main50() {
	int mainNum = 50;
	Students s1;
	cout << s1.s_age << endl;
	Students s2;
	s2.s_age=20; // 重新将共享的静态变量值改为20
	cout << s1.s_age << endl;

	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式
	//1、通过对象进行访问
	//Students s3;
	//cout << s3.s_age << endl;

	//2、通过类名进行访问
	cout << Students::s_age << endl;
	//cout << Students::s_score << endl;类外访问不到私有静态变量

	return 0;

}