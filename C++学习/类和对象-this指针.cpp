#include<iostream>
#include<string>
using namespace std;
//在C++中成员变量和成员函数是分开存储的，每一个非静态成员函数只会诞生一份函数实例，也就是多个同类型对象共用一块代码，这一块代码区分哪个对象
//调用自己的时候就需要用到this指针
//this指针指向被调用的成员函数所属的对象

//作用：
//1、当形参和成员变量同名时，可用this指针来区分
//2、返回对象本身

class Students {
public:
	int age;

public:
	Students(int age) {
		//age = age;//报错乱码 三个age属于同一个变量 
		//当形参和成员变量同名时，可用this指针来区分
		this->age = age;
	}

	void studentsAddAge1(Students &s) {
		this->age = this->age + s.age;
	}

	Students& studentsAddAge2(Students &s) {
		this->age = this->age + s.age;
		return *this;//返回this指向对象的本体
	}

};

int main53() {
	int mainNum = 53;
	Students s1(18);
	cout << s1.age << endl;

	Students s2(18);
	s2.studentsAddAge1(s1);
	cout << s2.age << endl;

	Students s3(18);
	cout << s3.age << endl;
	//链式编程思想
	s3.studentsAddAge2(s1).studentsAddAge2(s1).studentsAddAge2(s1);
	cout <<s3.age<< endl;

	return 0;

}