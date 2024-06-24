#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//常用遍历算法transform
class Trans1 {
public:
	int operator()(int v) {
		return v;
	}
};

class Trans2 {
public:
	int operator()(int v) {
		return v+100;
	}
};

int main145() {
	int mainNum = 145;
	vector<int> v1;
	for (int i = 0; i < 10;i++) {
		v1.push_back(i);
	}
	vector<int> v2;
	v2.resize(v1.size());
	transform(v1.begin(),v1.end(),v2.begin(),Trans1());//遍历
	for_each(v2.begin(), v2.end(), [](int v) {cout << v << " "; });
	transform(v1.begin(), v1.end(), v2.begin(), Trans2());//遍历+操作
	for_each(v2.begin(), v2.end(), [](int v) {cout << v << " "; });

	return 0;
}