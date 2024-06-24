#include<iostream>
#include<string>
using namespace std;

int main6() {

	int pig1, pig2, pig3;
	cout << "请输入小猪1的体重:" << endl;
	cin >> pig1;
	cout << "请输入小猪2的体重:" << endl;
	cin >> pig2;
	cout << "请输入小猪3的体重:" << endl;
	cin >> pig3;
	if (pig1 > pig2) {
		if (pig1>pig3) {
			cout << "小猪1的体重最重，为：" << pig1<<"kg"<<endl;
		}
		else if (pig1==pig3) {
			cout << "小猪1和3的体重最重，为：" << pig1 << "kg" << endl;
		}else
			cout << "小猪3的体重最重，为：" << pig3 << "kg" << endl;
	}
	else {
		if (pig1 == pig2) {
			if (pig1>pig3) {
				cout << "小猪1和2的体重最重，为：" << pig1 << "kg" << endl;
			}
			else if(pig1 == pig3){
				cout << "三只小猪体重一样，为：" << pig1 << "kg" << endl;
			}
			else {
				cout << "小猪3的体重最重，为：" << pig3 << "kg" << endl;
			}
		}
		else {
			pig2 > pig1;
			if (pig3 > pig2) {
				cout << "小猪3的体重最重，为：" << pig3 << "kg" << endl;
			}
			else if (pig3 == pig2) {
				cout << "小猪2和3的体重最重，为：" << pig2 << "kg" << endl;
			}else{
				cout << "小猪2的体重最重，为：" << pig2 << "kg" << endl;
			}
		}
	}
	


	return 0;
}