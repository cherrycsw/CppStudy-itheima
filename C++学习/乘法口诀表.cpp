#include<iostream>
#include<string>
using namespace std;
//�˷��ھ���
int main11() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= i; j++) {
			int product = j * i;
			cout << j << "x" << i<<"="<<product<<" ";
		}
		cout << endl;
	}

	return 0;
}
