#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
using namespace std;
//概念：返回bool类型的仿函数称为谓词 
//如果operator()接受两个参数，那么叫做二元谓词

class sortclass {
public:
	bool operator()(int v1,int v2) {
		return v1 > v2;

	}

};

int main140() {
	int mainNum = 140;
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	for (vector<int>::iterator it = v.begin(); it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
	//对容器中的数据自定义排序
	sort(v.begin(), v.end(), sortclass());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	

	return 0;
}