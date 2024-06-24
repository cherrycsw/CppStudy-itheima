#include<iostream>
#include<string>
using namespace std;
//全局函数做友元

//建筑物类
class Building {

	//goodGay全局函数是Building好朋友，可以访问Building中的私有成员
	friend void goodGay(Building &building);

public:
	string m_SittingRoom;//客厅

private:
	string m_BedRoom;//卧室

public:
	Building() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

};

//全局函数
void goodGay(Building &building) {
	cout << "好基友全局函数正在访问："<<building.m_SittingRoom<< endl;
	cout << "好基友全局函数正在访问：" << building.m_BedRoom << endl;
}

int main55() {
	int mainNum = 55;
	Building b;
	goodGay(b);



	return 0;

}