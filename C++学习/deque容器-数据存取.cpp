#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
//deque���������ݴ�ȡ




int main116() {
	int mainNum = 116;
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	d1.push_front(10);

	for (int i = 0; i < d1.size();i++) {
		cout << d1[i] << " ";//[]����
	}
	cout << endl;
	for (int i = 0; i < d1.size(); i++) {
		cout << d1.at(i)<< " ";//at����
	}
	
	return 0;
}