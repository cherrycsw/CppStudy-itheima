#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector容器互换

void printVector(vector<int> &v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout<<(*it)<<" ";
	}
	cout << endl;
}

int main110() {
	int mainNum = 110;
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2;
	for (int i = 10; i > 0; i--) {
		v2.push_back(i);
	}
	printVector(v2);

	//容器交换
	v1.swap(v2);
	printVector(v1);
	printVector(v2);

	//实际用途：巧用swap可以收缩内存空间
	vector<int> v3;
	for (int i = 0; i < 100000; i++) {
		v3.push_back(i);
	}
	cout << "v3的容量为：" << v3.capacity() << endl;
	cout << "v3的大小为：" << v3.size() << endl;

	v3.resize(3);//重新指定大小
	cout << "v3的容量为：" << v3.capacity() << endl;
	cout << "v3的大小为：" << v3.size() << endl;

	//swap收缩内存空间
	vector<int>(v3).swap(v3);//vector<int>(v3)创建了一个匿名对象，并调用拷贝构造函数将v3初始化给匿名对象，这时，
	                        //匿名对象的容量和大小就等于v3的大小,然后匿名对象与v3互换，所以v3的容量和大小=匿名对象的容量和大小=v3的大小
	                       //然后匿名对象随着此行代码的结束被释放空间
	cout << "v3的容量为：" << v3.capacity() << endl;
	cout << "v3的大小为：" << v3.size() << endl;
	return 0;
}