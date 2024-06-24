#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector存放内置数据类型

void myPrint(int val) {
	cout << val << endl;
}
int main94() {
	int mainNum = 94;
	//创建一个vector容器，数组
	vector<int> myArray;

	//向容器中插入数据
	myArray.push_back(19);
	myArray.push_back(20);

	//通过迭代器访问容器中的数据
	//第一种遍历方式（麻烦）
	vector<int>::iterator itBegin = myArray.begin();//起始迭代器 指向容器中的第一个元素
	vector<int>::iterator itEnd = myArray.end();//结束迭代器 指向容器中最后元素的下一个位置
	while (itBegin!= itEnd) {
		cout << *itBegin << endl;//迭代器我们一开始可以把他当作指针
		itBegin++;
	}

	//第二种遍历方式
	for (vector<int>::iterator it = myArray.begin(); it != myArray.end(); it++) {
		cout << *it << endl;
	}

	//第三种遍历方式，利用STL中提供的遍历算法
	for_each(myArray.begin(), myArray.end(), myPrint);

	return 0;

}