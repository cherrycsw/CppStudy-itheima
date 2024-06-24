#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
using namespace std;
//一元谓词 概念：返回bool类型的仿函数称为谓词
//如果operator()接受一个参数，那么就叫做一元谓词
//如果operator()接受两个参数，那么叫做二元谓词

class GreaterFive {
public:

	bool operator()(int v) {
		
		return v>5;

	}

};

int main139() {
	int mainNum = 139;
	vector<int> v;
	for (int i = 0; i < 10;i++) {
		v.push_back(i);
	}
	//查找容器中有没有大于5的数字
	vector<int>::iterator it=find_if(v.begin(), v.end(), GreaterFive());
	if (it==v.end()) {
		cout << "未找到" << endl;
	}
	else {
		cout << "找到了" << endl;
		cout << *it << endl;
	}

	return 0;
}