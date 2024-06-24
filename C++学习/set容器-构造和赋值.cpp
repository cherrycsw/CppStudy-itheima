#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
//set容器构造和赋值
//set基本概念：简称有序集合 特点：所有元素都会在插入的时候自动排序 
//本质：set/muliset属于关联式容器，底层结构是用二叉树实现的

//set和multiset区别：
//set不允许容器中有重复的元素
//multiset允许容器中有重复的元素

//注意1：插入数据只有insert方法 set不能用resize来重新指定大小，因为更改大小后的填充是重复的数据
//注意2：erase(pos)删除pos迭代器下标的元素 erase(elem)可以直接删除数值等于elem的元素
void printSet(const set<int> &s) {
	for (set<int>::const_iterator it = s.begin(); it != s.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main128() {
	int mainNum = 128;
	set<int> s;
	s.insert(10);
	s.insert(20);
	printSet(s);
	s.insert(15);
	printSet(s);
	s.insert(1);
	printSet(s);
	s.insert(30);
	printSet(s);

	return 0;
}