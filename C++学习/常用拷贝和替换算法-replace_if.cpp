#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
#include<functional>
using namespace std;
//���ÿ������滻�㷨-copy       ������ָ����ΧԪ�ؿ�������һ������
//���ÿ������滻�㷨-replace    ������ָ����Χ�ľ�Ԫ���滻Ϊ��Ԫ��
//���ÿ������滻�㷨-replace_if ���������������ľ�Ԫ���滻Ϊ��Ԫ��
//���ÿ������滻�㷨-swap       ��������������Ԫ��
class Greater5 {
public:
	bool operator()(int v) {
		return v > 5;
	}
};
int main157() {
	int mainNum = 157;
	//������������
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	v1.push_back(2);
	v1.push_back(2);
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;

	replace_if(v1.begin(), v1.end(), Greater5(), 1000);//replace_if ��ָ����Χ�ڴ���5���滻Ϊ1000
	for_each(v1.begin(), v1.end(), [](int v) {cout << v << " "; });
	cout << endl;;
	return 0;
}