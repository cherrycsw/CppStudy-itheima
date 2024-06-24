#include<iostream>
#include<string>
using namespace std;
//案例描述：电脑主要组成为CPU(用于计算)、显卡（用于显示）、内存条（用于存储），将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件
//，例如Intel厂商和Lenovo厂商创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口，测试时组装三台不同的电脑进行工作

//抽象CPU基类
class CPU {
public:
	virtual void caculate() = 0;
};

//抽象显卡基类
class Graphicscard {
public:
	virtual void display() = 0;
};

//抽象内存条基类
class Memory {
public:
	virtual void storage() = 0;
};

//电脑类
class Computer{
public :
	Computer(CPU *cpu,Graphicscard *graph,Memory *memo) {
		cout << "Computer构造函数执行" << endl;
		this->cpu = cpu;
		this->graph = graph;
		this->memo = memo;
	}

	void doWork(){
		cpu->caculate();
		graph->display();
		memo->storage();
	}

	~Computer()
	{
		cout << "Computer析构函数执行" << endl;
		if (cpu != NULL) {
			delete cpu;
			cpu = NULL;
		}
		if (graph != NULL) {
			delete graph;
			graph = NULL;
		}
		if (memo != NULL) {
			delete memo;
			memo = NULL;
		}
	}

private:
	CPU *cpu;
	Graphicscard *graph;
	Memory *memo;
};

class IntelCPU:public CPU {
public:
	virtual void caculate() {
		cout << "Intel CPU 开始计算了" << endl;
	}
};

class IntelGraphicscard :public Graphicscard {
public:
	virtual void display() {
		cout << "Intel 显卡 开始显示了" << endl;
	}
};

class IntelMemory :public Memory {
public:
	virtual void storage() {
		cout << "Intel 内存条 开始存储了" << endl;
	}
};

class LenovoCPU :public CPU {
public:
	virtual void caculate() {
		cout << "Lenovo CPU 开始计算了" << endl;
	}
};

class LenovoGraphicscard :public Graphicscard {
public:
	virtual void display() {
		cout << "Lenovo 显卡 开始显示了" << endl;
	}
};

class LenovoMemory :public Memory {
public:
	virtual void storage() {
		cout << "Lenovo 内存条 开始存储了" << endl;
	}
};
int main73() {
	int mainNum = 73;
	//第一台电脑组装
	Computer cp1(new IntelCPU, new IntelGraphicscard, new IntelMemory);
	cp1.doWork();
	cout << "-------------------------" << endl;
	//第二台电脑组装
	Computer cp2(new LenovoCPU, new LenovoGraphicscard, new LenovoMemory);
	cp2.doWork();
	cout << "-------------------------" << endl;
	//第三台电脑组装
	Computer cp3(new IntelCPU, new LenovoGraphicscard, new LenovoMemory);
	cp3.doWork();

	return 0;
}