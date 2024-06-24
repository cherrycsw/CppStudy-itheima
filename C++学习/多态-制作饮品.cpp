#include<iostream>
#include<string>
using namespace std;
//多态案例2：制作饮品

class MakeDrink {
public:
	virtual void boilWater() = 0;//煮水
	virtual void brew()= 0;//冲泡
	virtual void pourInCup() = 0;//倒入杯中
	virtual void putSometing() = 0;//加入辅料

	void makeDrink() {//制作饮品整个过程
		boilWater();
		brew();
		pourInCup();
		putSometing();
	}
};
class MakeCoffee :public MakeDrink {//制作咖啡
public:
	virtual void boilWater() {//煮水
		cout << "煮农夫山泉"<< endl;
	}
	virtual void brew() {//冲泡
		cout << "冲泡咖啡" << endl;
	}
	virtual void pourInCup() {//倒入杯中
		cout << "将冲泡好的咖啡倒入杯中" << endl;
	}
	virtual void putSometing() {//加入辅料
		cout << "加入糖和牛奶" << endl;
	}
};

class MakeTea :public MakeDrink {//制作茶水
public:
	virtual void boilWater() {//煮水
		cout << "煮农夫山泉" << endl;
	}
	virtual void brew() {//冲泡
		cout << "冲泡茶叶" << endl;
	}
	virtual void pourInCup() {//倒入杯中
		cout << "将冲泡好的茶水倒入杯中" << endl;
	}
	virtual void putSometing() {//加入辅料
		cout << "加入柠檬" << endl;
	}
};

void doWork(MakeDrink *md){
	md->makeDrink();
	delete md;//释放
}

int main71() {
	int mainNum = 71;
	
	doWork(new MakeCoffee);//制作咖啡
	cout << "--------------------" << endl;
	doWork(new MakeTea);//制作茶水

	return 0;
}