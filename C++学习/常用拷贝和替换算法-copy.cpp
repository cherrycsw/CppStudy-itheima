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

int main155() {
	int mainNum = 155;
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	vector<int> v2;
	v2.resize(v1.size());
	copy(v1.begin(),v1.end(),v2.begin());//copy
	for_each(v2.begin(), v2.end(), [](int v) {cout << v << " "; });
	cout << endl;
	return 0;
}