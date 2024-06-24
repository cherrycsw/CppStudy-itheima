#include<iostream>
#include<string>
using namespace std;
/*案例描述：
学校正在做毕设项目，每名老师带5个学生，总共有3名老师，需求如下：
设计学生和老师结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员，
学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
最终打印出老师数据以及老师所带学生数据
*/


//学生结构体
struct Students {
	//成员列表
	string name;//姓名
	int score;//考试分数
};

//老师结构体
struct Teacher {
	string name;
	Students stu[5];
};

//赋值函数
void setValue(Teacher *tea,int len) {

	for (int i = 1; i <= len;i++) {
		string teaName;
		cout << "请输入第" << i << "个老师的姓名：";
		cin >> teaName;
		tea->name = teaName;

		for (int j = 0; j < 5; j++) {
			string stuName;
			int stuScore;

			cout << "请输入第" << i << "个老师所带学生"<< j+1<<"的姓名：";
			cin >> stuName;
			tea->stu[j].name = stuName;

			cout << "请输入第" << i << "个老师所带学生" << j + 1 << "的成绩：";
			cin >> stuScore;
			tea->stu[j].score = stuScore;
		}

		tea++;

	}

}


int main29() {
	Teacher tea[3];
	int len = sizeof(tea)/ sizeof(tea[0]);

	setValue(tea,len);
	for (int i = 0; i < len;i++) {
		cout << "第" << i + 1 << "个老师的姓名为：" << tea[i].name << endl;
		for (int j = 0; j < 5;j++) {
			cout << "第" << i+1 << "个老师所带学生" << j + 1 << "的姓名为："<<tea[i].stu[j].name<<"  分数为："<< tea[i].stu[j].score<<endl;
		}
	}


	return 0;
}