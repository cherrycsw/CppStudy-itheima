#include<iostream>
#include<string>
using namespace std;

int main6() {

	int pig1, pig2, pig3;
	cout << "������С��1������:" << endl;
	cin >> pig1;
	cout << "������С��2������:" << endl;
	cin >> pig2;
	cout << "������С��3������:" << endl;
	cin >> pig3;
	if (pig1 > pig2) {
		if (pig1>pig3) {
			cout << "С��1���������أ�Ϊ��" << pig1<<"kg"<<endl;
		}
		else if (pig1==pig3) {
			cout << "С��1��3���������أ�Ϊ��" << pig1 << "kg" << endl;
		}else
			cout << "С��3���������أ�Ϊ��" << pig3 << "kg" << endl;
	}
	else {
		if (pig1 == pig2) {
			if (pig1>pig3) {
				cout << "С��1��2���������أ�Ϊ��" << pig1 << "kg" << endl;
			}
			else if(pig1 == pig3){
				cout << "��ֻС������һ����Ϊ��" << pig1 << "kg" << endl;
			}
			else {
				cout << "С��3���������أ�Ϊ��" << pig3 << "kg" << endl;
			}
		}
		else {
			pig2 > pig1;
			if (pig3 > pig2) {
				cout << "С��3���������أ�Ϊ��" << pig3 << "kg" << endl;
			}
			else if (pig3 == pig2) {
				cout << "С��2��3���������أ�Ϊ��" << pig2 << "kg" << endl;
			}else{
				cout << "С��2���������أ�Ϊ��" << pig2 << "kg" << endl;
			}
		}
	}
	


	return 0;
}