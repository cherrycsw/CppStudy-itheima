#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
//dequeÈİÆ÷ÅÅĞò²Ù×÷

bool func1(int a,int b) {
	return a < b;
}
int main117() {
	int mainNum = 117;
	deque<int> d1;
	d1.push_back(5);
	d1.push_back(2);
	d1.push_back(6);
	d1.push_back(1);
	d1.push_back(0);
	d1.push_front(9);
	d1.push_front(4);
	for (int i = 0; i < d1.size();i++) {
		cout << d1[i] << " ";
	}
	cout << endl;
	//ÅÅĞò²Ù×÷
	sort(d1.begin(), d1.end());//Ä¬ÈÏÉıĞòÅÅĞò
	sort(d1.begin(), d1.end(), [](int a, int b) {return a < b; });//×Ô¶¨ÒåÉıĞòÅÅĞò
	cout << "ÉıĞòÅÅĞòºó£º" << endl;
	for (int i = 0; i < d1.size(); i++) {
		cout << d1[i] << " ";
	}
	cout << endl;

	sort(d1.begin(), d1.end(), [](int a, int b) {return a > b; });//×Ô¶¨Òå½µĞòÅÅĞò
	cout << "½µĞòÅÅĞòºó£º" << endl;
	for (int i = 0; i < d1.size(); i++) {
		cout << d1[i] << " ";
	}
	cout << endl;

	return 0;
}