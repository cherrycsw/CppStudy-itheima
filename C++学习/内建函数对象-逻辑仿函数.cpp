#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//内建函数对象-逻辑仿函数

int main143() {
	int mainNum = 143;
	vector<bool> v1;
	v1.push_back(true);
	v1.push_back(false);
	v1.push_back(true);
	v1.push_back(false);
	for (vector<bool>::iterator it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//利用逻辑非 将容器v1搬运到容器v2中，并执行取反操作
	vector<bool> v2;
	v2.resize(v1.size());
	transform(v1.begin(),v1.end(),v2.begin(),logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;


	return 0;
}