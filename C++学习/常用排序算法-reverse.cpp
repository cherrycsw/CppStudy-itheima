#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//常用排序算法reverse:反转指定容器中的元素 倒序

int main154() {
	int mainNum = 154;
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	reverse(v1.begin(),v1.end());
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	return 0;
}