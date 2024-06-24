#include<iostream>
#include<string>
using namespace std;

//设计一个圆类，求圆的周长，计算公式=2*PI*半径

//圆周率
const double PI = 3.14;

class Circle {

	//访问权限(公共权限)
public:
	//行为
	double getZC() {  //获取圆的周长
		return 2 * PI*c_r;
	}

public:

	//属性
	int c_r;//圆的半径


};

class Students {
public:
	//赋值
	void set(string name, int id) {
		s_name = name;
		s_id = id;
	}

	//显示学生信息
	void printStudents() {
		cout << "姓名：" << s_name << "  学号：" << s_id<<endl;
	}

public:
	string s_name;
	int s_id;
};

int main38() {
	int mainNum = 38;
	
	Circle cl;
	cl.c_r = 10;
	cout << "圆的周长为：" << cl.getZC() << endl;

	Students stu;
	stu.set("张三",2022120376);
	stu.printStudents();
	return 0;
}