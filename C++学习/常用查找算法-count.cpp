#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//常用查找算法count 

class Personn2 {
public:
	Personn2(string name,int age) {
		this->name = name;
		this->age = age;
	}

	bool operator==(const Personn2 &p) {
		if (p.name==this->name&&p.age==this->age) {
			return true;
		}
		else {
			return false;
		}
	}

	string name;
	int age;
};


int main150() {
	int mainNum = 150;
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	v1.push_back(2);
	v1.push_back(2);
	
	int num = count(v1.begin(), v1.end(), 2);
	cout << num << endl;
	//自定义数据类型
	Personn2 p1("张三", 10);
	Personn2 p2("李四", 30);
	Personn2 p3("王五", 20);
	Personn2 p4("赵六", 50);
	Personn2 p5("孙琪", 40);
	Personn2 p6("王五", 20);
	vector<Personn2> v2;
	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);
	v2.push_back(p5);
	v2.push_back(p6);

	Personn2 pp("王五", 20);
	num = count(v2.begin(), v2.end(), pp);
	cout << num << endl;


	return 0;
}