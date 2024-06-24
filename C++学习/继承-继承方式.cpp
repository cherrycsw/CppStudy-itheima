#include<iostream>
#include<string>
using namespace std;
//继承方式

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//公共继承
class Son1 :public Base {
public:
	void func() {
		m_A = 10;//父类中的公共权限成员 到子类中依然是公共权限 类内类外都可访问
		m_B = 10;//父类中的保护权限成员 到子类中依然是保护权限 类内可以访问 类外不可访问
		//m_C = 10;//报错 父类中的私有权限成员 子类访问不到
	}
};

//保护继承
class Son2 :protected Base {
public:
	void func() {
		m_A = 10;//父类中的公共权限成员 到子类中是保护权限 类内可以访问 类外不可访问
		m_B = 10;//父类中的保护权限成员 到子类中是保护权限 类内可以访问 类外不可访问
		//m_C = 10;//报错 父类中的私有权限成员 子类访问不到
	}
};

//私有继承
class Son3 :private Base {
public:
	void func() {
		m_A = 10;//父类中的公共权限成员 到子类中是私有权限 类内可以访问 类外不可访问
		m_B = 10;//父类中的保护权限成员 到子类中是私有权限 类内可以访问 类外不可访问
		//m_C = 10;//报错 父类中的私有权限成员 子类访问不到
	}
};

//Son3孙子类 验证Son3里面的属性都是private
class GrandSon3 :public Son3 {
	void func() {
		//m_A = 10;//到Son3中该属性变为私有，即使是Son3的儿子也访问不到
		//m_B = 10;
	}
};

int main64() {
	int mainNum = 64;
	Son1 son1;
	son1.m_A = 100;//public 类外可以访问
	//son.m_B = 100;//protected 类外访问不了

	Son2 son2;
	//son2.m_A = 100;//protected 类外访问不了
	//son2.m_B = 100;//protected 类外访问不了

	Son3 son3;
	//son2.m_A = 100;//private 类外访问不了
	//son2.m_B = 100;//private 类外访问不了
	
	//总结：
	//继承的好处：减少重复代码
	//语法：class 子类(派生类)名 : 继承方式 父类(基类)名

	return 0;
}