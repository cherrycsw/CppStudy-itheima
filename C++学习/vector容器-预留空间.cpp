#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//vector容器预留空间
//功能：减少vector在动态扩展容量时的扩展次数 利用reserve预留空间解决


int main111() {
	int mainNum = 111;
	vector<int> v1;

	//利用reserve预留空间解决
	v1.reserve(100000);

	int num = 0;//统计开辟次数
	int *p = NULL;
	for (int i = 0; i < 100000; i++) {
		v1.push_back(i);
		if (p!=&v1[0]) {//vector开辟内存时，会将旧地址的数据拷贝到新地址，也就是首地址会发生变化，首地址每变化一次就是开辟一次内存空间
			p = &v1[0];
			num++;
		}
	}
	cout <<"内存开辟次数为："<< num << endl;
	//printVector(v1);

	return 0;
}