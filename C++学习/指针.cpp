#include<iostream>
using namespace std;

int main20() {
	int a = 10;
	int b = 20;
	int* p;

	cout << sizeof(p) << endl;
	cout << (int)&p << endl;

	cout << &a << endl;
	p = &a;
	cout << p << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(a) << endl;
	cout << *p<< endl;
	
	
	*p = b;
	cout << *p<< endl;
	cout << a << endl;
	
	cout <<"_____________________________________"<< endl;
	//指针所占空间大小
	cout << sizeof(short*) << endl;
	cout <<sizeof(int*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(long*) << endl;
	//结论：x86(32位)所占空间都为4字节，64位所占空间都为8字节
	

	cout << "_____________________________________" << endl;
	//空指针
	int* p2 = NULL;
	//*p2 = 100;
	//结论：空指针是不能进行访问的，因为空指针指向的是内存的0号地址，0-255号地址都是系统占用的地址，不能私有访问

	cout << "_____________________________________" << endl;
	//野指针
	int* p3 = (int*)0x1100;
	//cout << *p3 << endl;

	cout << "_____________________________________" << endl;
	//const修饰指针
		//1.const修饰指针—常量指针
	int a1 = 10;
	int b1 = 20;
	const int* p4 = &a1;
	//*p4 = 20;//错误
	p4 = &b1;//正确
		//特点：指针的指向可以修改，但是指针指向的值不可以修改

		//2.const修饰常量—指针常量
	int* const p5 = &a1;
	* p5 = 20;//正确
	//p5 = &b1;//错误
		//特点：指针的指向不可以修改，但是指针指向的值可以修改
	return 0;
}