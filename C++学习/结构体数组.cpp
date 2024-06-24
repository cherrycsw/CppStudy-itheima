#include<iostream>
#include<string>
using namespace std;

//结构体数组
struct Students {
	//成员列表
	string name;
	int age;
	int score;
};

int main25() {
	//创建结构体数组

	struct Students a[3] = { {"张三",18,90},{"李四",20,95},{"王五",22,100} };

	Students b[3] = { {"张三",18,90},{"李四",20,95},{"王五",22,100} };

	for (int i = 0; i < 3;i++) {
		cout << "姓名：" << a[i].name << " 年龄：" << a[i].age << " 成绩：" << a[i].score << endl;
	}

	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << b[i].name << " 年龄：" << b[i].age << " 成绩：" << b[i].score << endl;
	}

	return 0;
}