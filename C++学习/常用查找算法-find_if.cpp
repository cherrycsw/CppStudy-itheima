#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//常用查找算法find_if
class Personnn1 {
public:
	Personnn1(string name, int age) {
		this->name = name;
		this->age = age;
	}

	//重载==号 让底层find知道如何比较personnn数据类型
	bool operator==(const Personnn1 &p) {
		if (this->name == p.name&&this->age == p.age) {
			return true;
		}
		else {
			return false;
		}
	}

	string name;
	int age;
};

class compareee1 {
public:
	bool operator()(int v) {
		return v > 5;
	}
};

class compareee2 {
public:
	bool operator()(const Personnn1 &p) {
		return p.age > 20;
	}
};

int main147() {
	int mainNum = 147;
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	vector<int>::iterator pos1 = find_if(v1.begin(), v1.end(), compareee1());//查找容器中是否有大于5的元素
	if (pos1 != v1.end()) {
		cout << "找到了" << endl;
		cout<<*pos1<<endl;
	}
	else {
		cout << "未找到" << endl;
	}

	//自定义数据类型
	Personnn1 p1("aaa", 10);
	Personnn1 p2("bbb", 10);
	Personnn1 p3("ccc", 20);
	Personnn1 p4("ddd", 30);
	Personnn1 p5("eee", 40);
	vector<Personnn1> v2;
	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);
	v2.push_back(p5);
	vector<Personnn1>::iterator pos2 = find_if(v2.begin(), v2.end(), compareee2());//查找容器中是否有年龄大于20的元素
	if (pos2 != v2.end()) {
		cout << "找到了" << endl;
		cout<<(*pos2).name<<" "<< (*pos2).age<<endl;
	}
	else {
		cout << "未找到" << endl;
	}


	return 0;
}