#include<iostream>
#include<string>
using namespace std;

//C++中类(class)和结构体(struct)的唯一区别：默认访问权限不同
//class默认访问权限私有的
//struct默认访问权限公共的

class Students1 {
	int id;
};

struct Students2 {
	int id;
};

int main40() {
	int mainNum = 40;

	Students1 stu1;
	Students2 stu2;
	//stu1.id = 10;
	stu2.id = 10;

	return 0;
}