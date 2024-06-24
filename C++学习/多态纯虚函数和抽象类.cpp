#include<iostream>
#include<string>
using namespace std;
//纯虚函数和抽象类
//纯虚函数申明方式： virtual 返回值类型 函数名(参数列表)=0
//抽象类定义：只含有一个纯虚函数的类
//抽象类特点：不能实例化对象

class Base {//抽象类 
public:
	virtual void func() = 0;//纯虚函数
	
};

class Son:public Base {
public:
	virtual void func() {
		cout << "func子类函数调用" << endl;
	}
};

int main70() {
	int mainNum = 70;
	//1、抽象类不能实例化对象
	//Base cal1;//报错
	//new Base;//报错，抽象类无法实例化对象
	
	//2、抽象类的子类必须重写父类中的纯虚函数，否则也属于抽象类

	//Son son;//报错 如果子类没重写父类的纯虚函数子类也为抽象类
	Base *base = new Son;
	base->func();
	//cout << "result=" << cal1.getResult("/") << endl;

	return 0;
}