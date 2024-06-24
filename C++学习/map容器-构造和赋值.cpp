#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
//map容器构造和赋值
//简介：
//1、map中所有元素都是pair(对组)
//2、pair中第一个元素为key(键值)，起到索引作用，第二个元素为value(实值)
//3、所有元素都会根据元素键值(key)自动排序

//本质：map、multimap都属于关联式容器，底层结构是用二叉树实现的

//优点：可以根据key值快速找到value值

//map和multimap区别：map不允许容器中有重复的key值元素 multimap中允许有重复的key值元素
void printMap(const map<int, string> &m) {
	for (map<int, string>::const_iterator it = m.begin(); it != m.end();it++) {
		cout <<"(" <<(*it).first<<","<< (*it).second << ")" << " ";
	}
	cout << endl;
}

int main134() {
	int mainNum = 134;
	map<int, string> m;//默认构造
	m.insert(pair<int,string>(0,"张三"));//用匿名对组当参数
	m.insert(pair<int, string>(3, "李四"));
	m.insert(pair<int, string>(2, "王五"));
	m.insert(pair<int, string>(4, "赵六"));
	m.insert(pair<int, string>(1, "孙琪"));
	printMap(m);
	map<int, string> m1(m);//默拷贝构造
	map<int, string> m2;
	m2 = m1;//赋值操作
	


	return 0;
}