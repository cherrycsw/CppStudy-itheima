#include<iostream>
#include<string>
using namespace std;

//常量引用
//使用场景：用来修饰形参，防止误操作 就很像const int * const a=10； 指针只指向不可修改，指针指向的内容也不可修改

void showValue(const int &v) {
	//v = 20;//v值不可修改，只想打印，防止误操作
	cout << v << endl;
}

int main36() {
	int mainNum = 36;

	int a = 10;
	//int &ref = 10;//引用不合法，必须引用合法内存空间
	const int &ref = 10;//合法，加上const后，编译器将代码修改：int temp=10; const int &ref=temp;
	//ref = 20;//加上const后变为只读，不可修改

	showValue(a);
	return 0;
}