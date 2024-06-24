#include<iostream>
#include<string>
using namespace std;

//学生结构体
struct Students {
	//成员列表
	string name;//姓名
	int age;//年龄
	int score;//成绩
};

//老师结构体
struct Teacher1 {
	int id;//职工编号
	string name;//教师姓名
	int age;//年龄
	Students stu;//所带学生，子结构体
};
//老师指针结构体
struct Teacher2 {
	int id;//职工编号
	string name;//教师姓名
	int age;//年龄
	Students *stu;//所带学生，子结构体
};

int main27() {
	//1、创建结构体变量
	Students a = { "张三",18,90 };
	Teacher1 b = { 001,"王老师",40, {"李四",20,95} };
	Teacher2 c = { 001,"王老师",40, &a };
	cout << "教师编号：" <<b.id << " 教师姓名：" << b.name<< " 教师年龄：" << b.age << " 教师所带学生：" << b.stu.name << endl;

	//2、通过指针指向结构体变量
	Teacher2 *p = &c;
	//3、通过指针访问结构体变量中的数据
	
	cout << "教师编号：" << p->id << " 教师姓名：" << p->name << " 教师年龄：" << p->age <<" 教师所带学生："<<p->stu->name<< endl;

	return 0;
}