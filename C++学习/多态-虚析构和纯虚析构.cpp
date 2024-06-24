#include<iostream>
#include<string>
using namespace std;
//问题：多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决方式：将父类中的析构函数改为虚析构或者纯虚析构

//虚析构和纯虚析构共性：
//1、可以解决父类指针释放子类对象
//2、都需要有具体的函数实现
//3、虚析构和纯虚析构的区别：如果是纯虚析构，该类属于抽象类，无法实例化对象

class Animal2 {
public:
	Animal2() {
		cout << "Animal2构造函数调用" << endl;
	}

	//利用虚析构可以解决父类指针释放子类对象时不干净的问题
	/*virtual ~Animal2()
	{
		cout << "Animal2虚析构函数调用" << endl;
	}*/

	virtual ~Animal2() = 0;//纯虚析构

	virtual void speak() = 0;//纯虚函数

	
};

Animal2::~Animal2() {//得具体实现才不报错
	cout << "Animal2纯虚析构函数调用" << endl;
}

class Cat1 :public Animal2 {
public:
	string *m_Name;

public:
	Cat1(string name) {
		cout << "Cat1构造函数调用" << endl;
		m_Name = new string(name);
	}

	virtual void speak() {
		cout << *m_Name<<"喵喵" << endl;
	}

	~Cat1()
	{
		if (m_Name != NULL) {
			cout << "Cat1析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	
};

int main72() {
	int mainNum = 72;

	Animal2 *an = new Cat1("汤姆");
	an->speak();
	delete an;

	return 0;
}