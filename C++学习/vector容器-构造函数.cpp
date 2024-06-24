#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector容器的数据结构和数组很相似
//区别：数组是静态空间，vector可以动态扩展

void print(int value) {
	cout << value << endl;
}

int main105() {
	int mainNum = 105;
	//vector构造函数
	vector<int> v1;//默认构造 无参构造
	for (int i = 0; i < 10;i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(),v1.end(),print);

	vector<int> v2(v1.begin(),v1.end());//区间初始化
	for_each(v2.begin(), v2.end(), print);

	vector<int> v3(10,5);//初始化10个5
	for_each(v3.begin(), v3.end(), print);

	vector<int> v4(v1);//初始化10个5
	for_each(v4.begin(), v4.end(), print);
	
	return 0;
}
