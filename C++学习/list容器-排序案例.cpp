#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//list容器排序案例：将Person自定义数据类型进行排序，Person中有姓名、年龄、身高
//排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序

class Person021 {
public:
	string name;
	int age;
	int height;
public:
	Person021(string name,int age,int height) {
		this->name = name;
		this->age = age;
		this->height = height;
	}
};

void printPerson021(const Person021 &p) {
	cout << "姓名："<<p.name<<"\t年龄："<<p.age<<"\t身高："<<p.height << endl;
}

bool myCompare1(const Person021 &p1, const Person021 &p2) {
	if (p1.age != p2.age) {
		return p1.age<p2.age;
	}
	else {
		return p1.height > p2.height;
	}
	
}

int main127() {
	int mainNum = 127;
	list<Person021> L;
	Person021 p1("张三",18,170);
	Person021 p2("李四", 19, 172);
	Person021 p3("王五", 16, 180);
	Person021 p4("赵六", 20, 175);
	Person021 p5("孙琪", 19, 175);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	cout << "排序前：" << endl;
	//遍历
	for_each(L.begin(),L.end(),printPerson021);
	L.sort(myCompare1);
	cout << "排序后：" << endl;
	//遍历
	for_each(L.begin(), L.end(), printPerson021);

	return 0;
}