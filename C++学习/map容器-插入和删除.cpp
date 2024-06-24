#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
//map容器插入和删除

//erase(key) 按照key删除整个元素
void printFor_each(const pair<int,string> &p) {
	cout << "(" << p.first << "," << p.second << ")" << " ";
}
void printMap1(const map<int, string> &m) {
	for (map<int, string>::const_iterator it = m.begin(); it != m.end(); it++) {
		cout << "(" << (*it).first << "," << (*it).second << ")" << " ";
	}
	cout << endl;
}

int main135() {
	int mainNum = 135;
	map<int, string> m;//默认构造
	//第一种插入方式
	m.insert(pair<int, string>(0, "张三"));
	//第二种插入方式
	m.insert(make_pair(3, "李四"));//推荐
	//第三种插入方式
	m.insert(map<int, string>::value_type(2, "王五"));
	//第四种插入方式
	m[1] = "孙琪";//不建议使用 如果[]中的key值不存在，则会在map容器中新创建元素(key,) 更不建议用来访问
	cout << m[5] << endl;
	
	printMap1(m);
	for_each(m.begin(),m.end(),printFor_each);
	
	m.erase(5);//按照key值删除
	printMap1(m);

	return 0;
}