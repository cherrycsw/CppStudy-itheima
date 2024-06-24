#include<iostream>
#include<string>
using namespace std;
//菱形继承 利用虚继承可以解决菱形继承带来的问题

class Animal {
public:
	int m_A;
};

class Sheep :virtual public Animal {

};

class Tuo :virtual public Animal {

};

class SheepTuo :public Sheep, public Tuo {

};

int main66() {
	int mainNum = 66;
	
	SheepTuo st;
	//st.m_A = 10;//报错，产生二义性 不知道是对Sheep的属性赋值还是对Tuo的属性赋值
	st.Sheep::m_A = 10;
	st.Tuo::m_A = 20;
	cout << st.Sheep::m_A << endl;
	cout << st.Tuo::m_A << endl;
	cout << st.m_A << endl;//虚继承后就不会报错
	//SheepTuo对象具有两个m_A属性，导致资源浪费 利用虚继承可以解决菱形继承带来的问题

	//总结：虚继承继承的是虚基类的指针，访问子类属性就是根据虚基类指针加上偏移量找到虚基类的属性，从而子类始终与虚基类共享一份数据
	return 0;
}