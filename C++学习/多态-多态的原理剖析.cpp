#include<iostream>
#include<string>
using namespace std;


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
void doSpeak1(Animal &animal) {//动态多态使用 Animal &animal = cat; 父类的指针或者引用指向子类对象
	animal.speak();
}


int main68() {
	int mainNum = 68;
	Cat cat;
	doSpeak1(cat);
	Dog dog;
	doSpeak1(dog);
	cout << "sizeof Animal=" << sizeof(Animal) << endl;//父类方法没加virtual关键字时 类中非静态成员函数和类对象属性是分开存储的 所以类的大小就是非静态成员变量的大小 没有非静态成员变量时类的大小就为1 占位字符用来区分类
														//加了virtual关键字时 父类的大小就是（虚函数指针）vfptr的大小为4个字节 虚函数指针指向父类虚函数地址 当子类继承父类的时候也会继承父类虚函数地址，并重写
														//虚函数地址中的虚函数，实现子类函数的功能 所以当Animal &animal = cat时，对象就会变为子类的对象
	return 0;
}