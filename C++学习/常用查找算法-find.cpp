#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//常用查找算法find
class Personnn {
public:
	Personnn(string name,int age) {
		this->name = name;
		this->age = age;
	}

	//重载==号 让底层find知道如何比较personnn数据类型
	bool operator==(const Personnn &p) {
		if (this->name==p.name&&this->age==p.age) {
			return true;
		}else{
			return false;
		}
	}

	string name;
	int age;
};


int main146() {
	int mainNum = 146;
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	vector<int>::iterator pos1=find(v1.begin(), v1.end(), 5);//查找容器中是否有5这个元素
	if (pos1!=v1.end()) {
		cout << "找到了" << endl;
	}
	else {
		cout << "未找到" << endl;
	}

	Personnn p1("aaa", 10);
	Personnn p2("bbb", 10);
	Personnn p3("ccc", 20);
	Personnn p4("ddd", 30);
	Personnn p5("eee", 40);
	vector<Personnn> v2;
	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);
	v2.push_back(p5);
	Personnn pp("eee", 40);
	vector<Personnn>::iterator pos2 = find(v2.begin(), v2.end(),pp);//查找容器中是否有pp这个元素
	if (pos2 != v2.end()) {
		cout << "找到了" << endl;
	}
	else {
		cout << "未找到" << endl;
	}


	return 0;
}