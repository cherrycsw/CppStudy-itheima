#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector容器插入和删除


void print5(int value) {
	cout << value << " ";
}

int main108() {
	int mainNum = 108;
	vector<int> v1;
	for (int i = 0; i < 5; i++) {
		v1.push_back(i);
	}
	v1.push_back(5);//尾部插入元素
	v1.push_back(6);
	for_each(v1.begin(), v1.end(), print5);
	cout << endl;

	v1.pop_back();//尾部删除元素
	for_each(v1.begin(), v1.end(), print5);
	cout << endl;

	v1.insert(v1.begin(), 10);//迭代器指向位置v1.begin()插入元素10
	for_each(v1.begin(), v1.end(), print5);
	cout << endl;

	v1.insert(v1.begin(),3, 10);//迭代器指向位置v1.begin()插入3个元素10
	for_each(v1.begin(), v1.end(), print5);
	cout << endl;

	v1.erase(v1.begin());//删除迭代器v1.begin()指向的元素
	for_each(v1.begin(), v1.end(), print5);
	cout << endl;

	v1.erase(v1.begin(),v1.end());//删除迭代器从begin到end之间的元素，等价于清空操作=v1.clear();
	for_each(v1.begin(), v1.end(), print5);
	
	
	return 0;
}