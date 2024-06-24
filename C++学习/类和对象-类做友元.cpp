#include<iostream>
#include<string>
using namespace std;
//类做友元

//建筑物类
class Buildings {

	//GoodGay类是Building好朋友，可以访问Building中的私有成员
	friend class GoodGay;

public:
	string m_SittingRoom;//客厅

private:
	string m_BedRoom;//卧室

public:
	Buildings();//类内声明，类外实现

};

class GoodGay {

public:
	Buildings *building;

public:
	GoodGay();//类内声明，类外实现
	void visit();//参观函数 访问Building中的属性

};

Buildings::Buildings() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
	//创建建筑物对象
	building = new Buildings;
}

void GoodGay::visit() {
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友正在访问："<<building->m_BedRoom << endl;
}


int main56() {
	int mainNum = 56;
	GoodGay g;
	g.visit();
	cout << (1 - 3) % 4 << endl;



	return 0;

}