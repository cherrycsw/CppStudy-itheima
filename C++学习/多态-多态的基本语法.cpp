#include<iostream>
#include<string>
using namespace std;
//多态是C++面向对象三大特性之一
//多态分为两类:
//静态多态：函数重载和运算符重载属于静态多态，复用函数名
//动态多态：派生类和虚函数实现运行时多态

//静态多态和动态多态的区别：
//静态多态的函数地址早绑定-编译阶段确定函数地址
//动态多态的函数地址晚绑定-运行阶段确定函数地址

//动态多态满足条件：
//1、有继承关系
//2、子类要重写父类中的虚函数 子类重写的函数virtual关键字可写可不写

//动态多态使用：
//父类的指针或者引用指向子类对象


class Animal {
public:
	virtual void speak() {//将父类的说话函数改为虚函数,就会实现地址晚绑定
		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal {
public:
	virtual void speak() {//virtual关键字可写可不写
		cout << "喵喵" << endl;
	}
};

class Dog :public Animal {
public:
	void speak() {
		cout << "汪汪" << endl;
	}
};

//执行说话的函数
//地址早绑定 在编译阶段确定函数地址 如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段绑定，也就是地址晚绑定 方法：将父类的说话函数改为虚函数
void doSpeak(Animal &animal){//动态多态使用 Animal &animal = cat; 父类的指针或者引用指向子类对象
	animal.speak();
}

int main67() {
	int mainNum = 67;
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
	
	return 0;
}