#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//常用排序算法sort

int main152() {
	int mainNum = 152;
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	v1.push_back(2);
	v1.push_back(2);
	sort(v1.begin(),v1.end());//默认从小到大
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	sort(v1.begin(), v1.end(), greater<int>());//从大到小 函数对象 二元谓词
	sort(v1.begin(), v1.end(), [](int v1, int v2) {return v1 > v2; });//从大到小 lambda表达式
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	
	return 0;
}