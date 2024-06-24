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
class Greater5 {
public:
	bool operator()(int v) {
		return v > 5;
	}
};
int main157() {
	int mainNum = 157;
	//内置数据类型
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	v1.push_back(2);
	v1.push_back(2);
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	replace_if(v1.begin(), v1.end(), Greater5(), 1000);//replace_if 将指定范围内大于5的替换为1000
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;;
	return 0;
}