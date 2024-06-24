#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
//deque容器插数据存取




int main116() {
	int mainNum = 116;
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	d1.push_front(10);

	for (int i = 0; i < d1.size();i++) {
		cout << d1[i] << " ";//[]访问
	}
	cout << endl;
	for (int i = 0; i < d1.size(); i++) {
		cout << d1.at(i)<< " ";//at访问
	}
	
	return 0;
}