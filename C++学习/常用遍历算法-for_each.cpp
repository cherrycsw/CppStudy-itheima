#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//���ñ����㷨for_each

//��ͨ����
void printv1(int v) {
	cout << v << " ";

}

//�º���
class printv2 {
public:
	void operator()(int v) {
		cout << v << " ";
	}
};

int main144() {
	int mainNum = 144;
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	for_each(v1.begin(), v1.end(), printv1);
	cout << endl;
	for_each(v1.begin(), v1.end(), printv2());
	cout << endl;



	return 0;
}