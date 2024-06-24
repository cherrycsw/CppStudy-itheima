#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector容器赋值操作
//vector &operator=(const vector &vec); 重载等号操作符
//asign(beg,end)                        将[beg,end)区间中的数据拷贝赋值给本身
//asign(n,elem)                         将n个elem拷贝赋值给本身

void print3(int value) {
	cout << value << endl;
}

int main106() {
	int mainNum = 106;
	//vector构造函数
	vector<int> v1;//默认构造 无参构造
	for (int i = 0; i < 5; i++) {
		v1.push_back(i);
	}
	vector<int> v2=v1;
	for_each(v2.begin(),v2.end(),print3);

	return 0;
}