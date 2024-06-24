#include<iostream>
#include<string>
using namespace std;

//结构体指针
struct Students {
	//成员列表
	string name;
	int age;
	int score;
};

int main26() {
	//1、创建结构体变量
	Students a = { "张三",18,90};
	//2、通过指针指向结构体变量
	Students *p = &a;
	//3、通过指针访问结构体变量中的数据
	cout << "姓名：" << p->name << " 年龄：" << p->age << " 成绩：" << p->score << endl;

	//1、创建结构体数组变量
	Students b[3] = { {"张三",18,90},{"李四",20,95},{"王五",22,100} };
	//2、通过指针指向结构体变量
	Students *q = b;
	//3、通过指针访问结构体变量中的数据
	int i = 0;
	cout << q << endl;
	while (i < 3) {
		cout << "姓名：" << q->name << " 年龄：" << q->age << " 成绩：" << q->score << endl;
		i++;
		q++;
	}

	return 0;
}