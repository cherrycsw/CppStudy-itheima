#include<iostream>
#include<string>
using namespace std;
//常函数：
//成员函数后加const就是常函数
//常函数内不可修改成员属性
//成员属性申明时加关键字mutabel后，在常函数中依然可以修改

//常对象：
//声明对象前加const称该对象为常对象
//常对象只能调用常函数


class Students {
public:
	int age;
	mutable int b;//特殊成员属性
	static int c;

public:
	
	void showStudents() const{//const修饰this指针
		//age = 100;//不能修改出错 等同于this->age=100; 
		//this = NULL; //而this指针的本质是指针常量：Person * const this，指向不可修改，而函数后面加上const后就变为const Person * const this;
		b = 10; //特殊成员属性可以修改
	}
	void fuc() {

	}
		


};

int Students::c = 0;

int main54() {
	int mainNum = 54;
	const Students s1;//常对象
	//s1.age = 100;常对象的普通属性不可修改
	s1.b = 100; //特殊成员属性可以修改
	s1.c = 100;//常对象的静态属性可以修改，因为静态属性不属于某个对象，是共享的

	//常对象只能调用常函数
	//s1.fuc();//报错，如果能调用普通成员函数，则可以从侧面修改类的属性，与常对象的性质相悖
	s1.showStudents();



	return 0;

}