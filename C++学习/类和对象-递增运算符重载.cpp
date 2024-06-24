#include<iostream>
#include<string>
using namespace std;
//递增运算符重载

class MyInteger {
	friend MyInteger &operator++(MyInteger &myint);
	friend ostream &operator<<(ostream &cout, MyInteger myint);
	friend MyInteger operator++(MyInteger &myint, int);

private:
	int m_Num;

public:
	MyInteger() {
		m_Num = 0;
	}
	//1前置递增
	//MyInteger &operator++() {//必须引用
	//	m_Num++;
	//	return *this;
	//}

	//2后置递增
	//MyInteger operator++(int) {//int代表占位参数，用于区分前置后置递增
	//	//先记录当时结果
	//	MyInteger temp = *this;
	//	//后递增
	//	m_Num++;
	//	//最后将记录结果返回
	//	return temp;
	//}

};  

//4、全局函数重载前置递增运算符

MyInteger &operator++(MyInteger &myint) {
	myint.m_Num= myint.m_Num+1;
	return myint;
}

//3、全局函数重载左移运算符
ostream &operator<<(ostream &cout, MyInteger myint) {
	cout <<myint.m_Num;
	return cout;
}

//4、全局函数重载后置递增运算符

MyInteger operator++(MyInteger &myint,int) {
	MyInteger temp = myint;
	myint.m_Num++;
	return temp;
}


int main59() {
	int mainNum = 59;

	MyInteger myint1;
	cout<<++(++myint1)<< endl;
	MyInteger myint2;
	cout <<myint2++ << endl;
	cout << myint2 << endl;
	return 0;

}