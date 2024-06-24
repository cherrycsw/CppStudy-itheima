#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//常用查找算法count_if

class Personn3 {
public:
	Personn3() {

	}
	Personn3(string name, int age) {
		this->name = name;
		this->age = age;
	}

	bool operator()(const Personn3 &p) {
		return p.age > 20;
	}

	string name;
	int age;
};
class Greater5 {
public:
	bool operator()(int v) {
		return v > 5;
	}
};


int main151() {
	int mainNum = 151;
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	v1.push_back(2);
	v1.push_back(2);
	int num = count_if(v1.begin(), v1.end(), Greater5());//统计v1中大于5个元素个数
	cout << num << endl;

	//自定义数据类型
	Personn3 p1("张三", 10);
	Personn3 p2("李四", 30);
	Personn3 p3("王五", 20);
	Personn3 p4("赵六", 50);
	Personn3 p5("孙琪", 40);
	Personn3 p6("王五", 20);
	vector<Personn3> v2;
	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);
	v2.push_back(p5);
	v2.push_back(p6);

	num = count_if(v2.begin(), v2.end(), Personn3());//统计v2中年龄大于20的元素个数
	cout << num << endl;


	return 0;
}