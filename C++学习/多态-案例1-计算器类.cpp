#include<iostream>
#include<string>
using namespace std;
//案例描述：分别利用普通写法和多态技术，设计两个操作数进行运算的计算器类

//多态的优点：1、代码组织结构清晰  2、可读性强  3、利于前期和后期的扩展及维护

//普通实现
class Calculator1 {
public:
	int getResult(string s) {
		if (s=="+") {
			return m_Num1 + m_Num2;
		}
		else if (s == "-") {
			return m_Num1 - m_Num2;
		}
		else if (s == "*") {
			return m_Num1 * m_Num2;
		}
		//如果想扩展新的功能，需要修改源码   在真实开发中，提倡开闭原则：对扩展进行开发，对修改进行关闭
		else if(s == "/"){
			return m_Num1 / m_Num2;
		}
	}

public:
	int m_Num1;
	int m_Num2;
};

//多态实现
//先实现计算器基类
class AbstractCalculator {
public:
	virtual int getResult() {
		return 1;
	}
	
	int m_Num1;
	int m_Num2;
};

//加法计算器类
class AddCalculator:public AbstractCalculator {
public:
	int getResult() {
		return m_Num1+ m_Num2;
	}
};

//减法计算器类
class SubCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 - m_Num2;
	}
};

//乘法计算器类
class MutiCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 * m_Num2;
	}
};

//除法计算器类
class DiviCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 / m_Num2;
	}
};

int main69() {
	int mainNum = 69;
	Calculator1 cal1;
	cal1.m_Num1 = 10;
	cal1.m_Num2 = 2;
	cout << "result=" << cal1.getResult("/")<< endl;

	//多态使用条件：父类引用或指针指向子类对象

	//加法运算
	AbstractCalculator *Abcal= new AddCalculator;
	Abcal->m_Num1 = 10;
	Abcal->m_Num2 = 2;
	cout << "result=" << Abcal->getResult() << endl;
	delete Abcal;

	//减法运算
	Abcal = new SubCalculator;
	Abcal->m_Num1 = 10;
	Abcal->m_Num2 = 2;
	cout << "result=" << Abcal->getResult() << endl;
	delete Abcal;
	return 0;

	//总结：C++开发提倡利用多态设计程序架构，因为多态优点很多
}