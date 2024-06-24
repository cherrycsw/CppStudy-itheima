#include<iostream>
#include<string>
using namespace std;
//Ìø×ªgoto
int main12() {
	while (1) {
		cout << "1.*******" << endl;
		cout << "2.*******" << endl;
		goto FLAG;
		cout << "3.*******" << endl;
		cout << "4.*******" << endl;
	}

	FLAG:
	cout << "5.*******" << endl;
	int arr[] = { 1,2,3,4,5,6 };
	cout << arr << endl;

	return 0;
}