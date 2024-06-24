#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//类模板中成员函数创建时机：
//普通类中的成员函数一开始就可以创建
//类模板中的成员函数在调用时才创建

class Person002 {//普通类
public:
	void showPerson002() {
		cout << "Person002 show" << endl;
	}
};

class Person003 {//普通类
public:
	void showPerson003() {
		cout << "Person003 show" << endl;
	}
};

template<class T>//类模板
class Person004 {
public:
	T obj;

public:
	void func1() {
		obj.showPerson002();
	}
	void fuc2() {
		obj.showPerson003();
	}

};

int main87() {
	int mainNum = 87;
	Person004<Person002> p;
	p.func1();
	//p.fuc2();//出错
	

	return 0;

}