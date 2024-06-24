#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
//set容器 - 自定义数据类型指定排序规则    注意：自定义数据类型必须指定排序规则
//set容器默认排序规则为：从小到大，掌握如何改变排序规则 主要技术：利用仿函数
class Personn1 {
public:
	string name;
	int age;
public:
	Personn1(string name,int age) {
		this->name = name;
		this ->age = age;
	}
};

class MyCompare4 {
public:
	bool operator()(const Personn1 &p1, const Personn1 &p2) {
		return p1.age < p2.age;
	}
};

int main133() {
	int mainNum = 133;
	Personn1 p1("张三", 16);
	Personn1 p2("李四", 20);
	Personn1 p3("王五", 12);
	Personn1 p4("赵六", 55);
	Personn1 p5("孙琪", 44);
	//指定排序规则为按照年龄从小到大
	set<Personn1,MyCompare4> s1;
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	s1.insert(p5);
	for (set<Personn1, MyCompare4>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << "姓名："<<(*it).name << "  年龄：" << (*it).age<< endl;
	}

	return 0;
}