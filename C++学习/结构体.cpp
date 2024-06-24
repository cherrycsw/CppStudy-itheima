#include<iostream>
#include<string>
using namespace std;

//自定义数据类型
struct Students {
	//成员列表
	string name;
	int age;
	int score;
}c;

int main24() {
	//创建具体学生
	//方式一:
	struct Students a;
	a.name = "张三";
	a.age = 18;
	a.score = 90;
	cout << "姓名："<< a.name << " 年龄：" << a.age << " 成绩：" << a.score << endl;

	//方式二:
	struct Students b = { "李四",20,95 };
	cout << "姓名：" << b.name << " 年龄：" << b.age << " 成绩：" << b.score << endl;

	//方式三:创建结构体的时候顺便创建结构体变量
	c.name = "王五";
	c.age = 22;
	c.score = 100;
	cout << "姓名：" << c.name << " 年龄：" << c.age << " 成绩：" << c.score << endl;

	return 0;
}