#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//常用拷贝和替换算法-copy       容器内指定范围元素拷贝到另一容器中
//常用拷贝和替换算法-replace    容器内指定范围的旧元素替换为新元素
//常用拷贝和替换算法-replace_if 容器内满足条件的旧元素替换为新元素
//常用拷贝和替换算法-swap       互换两个容器的元素

int main158() {
	int mainNum = 158;
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	vector<int> v2;
	for (int i = 10; i > 0; i--) {
		v2.push_back(i);
	}
	for_each(v2.begin(), v2.end(), [](int v) {cout << v << " "; });
	cout << endl;
	//v1.swap(v2);

	swap(v1, v2);//swap交换

	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;
	for_each(v2.begin(), v2.end(), [](int v) {cout << v << " "; });
	cout << endl;
	return 0;
}