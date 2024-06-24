#include<iostream>
#include<string>
using namespace std;
//����������������Ҫ���ΪCPU(���ڼ���)���Կ���������ʾ�����ڴ��������ڴ洢������ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����
//������Intel���̺�Lenovo���̴����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿڣ�����ʱ��װ��̨��ͬ�ĵ��Խ��й���

//����CPU����
class CPU {
public:
	virtual void caculate() = 0;
};

//�����Կ�����
class Graphicscard {
public:
	virtual void display() = 0;
};

//�����ڴ�������
class Memory {
public:
	virtual void storage() = 0;
};

//������
class Computer{
public :
	Computer(CPU *cpu,Graphicscard *graph,Memory *memo) {
		cout << "Computer���캯��ִ��" << endl;
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
		cout << "Computer��������ִ��" << endl;
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
		cout << "Intel CPU ��ʼ������" << endl;
	}
};

class IntelGraphicscard :public Graphicscard {
public:
	virtual void display() {
		cout << "Intel �Կ� ��ʼ��ʾ��" << endl;
	}
};

class IntelMemory :public Memory {
public:
	virtual void storage() {
		cout << "Intel �ڴ��� ��ʼ�洢��" << endl;
	}
};

class LenovoCPU :public CPU {
public:
	virtual void caculate() {
		cout << "Lenovo CPU ��ʼ������" << endl;
	}
};

class LenovoGraphicscard :public Graphicscard {
public:
	virtual void display() {
		cout << "Lenovo �Կ� ��ʼ��ʾ��" << endl;
	}
};

class LenovoMemory :public Memory {
public:
	virtual void storage() {
		cout << "Lenovo �ڴ��� ��ʼ�洢��" << endl;
	}
};
int main73() {
	int mainNum = 73;
	//��һ̨������װ
	Computer cp1(new IntelCPU, new IntelGraphicscard, new IntelMemory);
	cp1.doWork();
	cout << "-------------------------" << endl;
	//�ڶ�̨������װ
	Computer cp2(new LenovoCPU, new LenovoGraphicscard, new LenovoMemory);
	cp2.doWork();
	cout << "-------------------------" << endl;
	//����̨������װ
	Computer cp3(new IntelCPU, new LenovoGraphicscard, new LenovoMemory);
	cp3.doWork();

	return 0;
}