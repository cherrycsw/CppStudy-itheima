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

//参数为结构体指变量，只能对形参数据进行修改
void printStudent1(Students stu) {
	stu.age = 100;
	cout << "子函数1输出 姓名：" << stu.name << " 年龄：" << stu.age << " 成绩：" << stu.score << endl;
}

//参数为结构体指针，可以对实参数据进行修改，而且指针所占空间较小，可以减少内存空间，不会复制新的副本出来
void printStudent2(Students *stu) {
	stu->age = 100;
	cout << "子函数2输出姓名：" << stu->name << " 年龄：" << stu->age << " 成绩：" << stu->score << endl;
}

//const修饰结构体
void printStudent3(const Students *stu) {
	//stu->age = 100;//加入const后，一旦修改就会报错，可防止误操作
	cout << "子函数3输出姓名：" << stu->name << " 年龄：" << stu->age << " 成绩：" << stu->score << endl;
}


int main28() {
	Students a = { "张三",18,90 };
	printStudent1(a);
	cout << "主函数1输出 姓名：" << a.name << " 年龄：" << a.age << " 成绩：" << a.score << endl;
	printStudent2(&a);
	cout << "主函数2输出 姓名：" << a.name << " 年龄：" << a.age << " 成绩：" << a.score << endl;
	const Students b = { "李四",20,95 };
	printStudent1(b);
	//printStudent2(&b);形参类型不匹配报错
	printStudent3(&b);

	return 0;
}