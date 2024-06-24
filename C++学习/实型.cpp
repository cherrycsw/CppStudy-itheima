
#include <iostream>
#include <iomanip>
using namespace std;

int main1()
{
	//单精度 float
	//双精度 double
	float f1 = 3.1415926f;
	double d2 = 3.1415926;
	cout << "f1=" << f1 << endl;
	cout << "d2=" << d2 << endl;
	cout << setprecision(8) << "f2=" << d2 << endl;
	cout << "float所占空间大小" << sizeof(f1) << endl;
	cout << "double所占空间大小" << sizeof(d2) << endl;
	//科学计数法
	float f2 = 3e2;
	cout << "f2=" << f2 << endl;
    //std::cout << "Hello World!\n";
	return 0;

}