#include<iostream>
#include<string>
#include"point.h"
#include"circle.h"
using namespace std;

//案例设计点和圆
//求出点和圆的位置关系：点在圆外、点在圆内、点在圆上

//class Point {
//private:
//	double p_x;
//	double p_y;
//
//public:
//	void setx(double x) {
//		p_x = x;
//	}
//
//	void sety(double y) {
//		p_y = y;
//	}
//
//	double getx() {
//		return p_x;
//	}
//
//	double gety() {
//		return p_y;
//	}
//};
//
//class Circle {
//private:
//	Point c_center;//圆心本身也是一个Point对象
//	double c_r;
//
//public:
//	void setCenter(Point &center) {
//		c_center = center;
//	}
//
//	void setr(double r) {
//		c_r=r;
//	}
//
//	Point getCenter() {
//		return c_center;
//	}
//
//
//	double getr() {
//		return c_r;
//	}
//};

//全局函数判断点与圆的位置关系
void judgePosition(Point &p, Circle &c) {
	double distance = (p.getx() - c.getCenter().getx()) * (p.getx() - c.getCenter().getx()) + 
					  (p.gety() - c.getCenter().gety()) * (p.gety() - c.getCenter().gety());
	
	double r2 = c.getr() * c.getr();
	
	if (distance>r2) {
		cout << "点在圆外!" << endl;
	}
	else if(distance == r2){
		cout << "点在圆上!" << endl;
	}
	else {
		cout << "点在圆内!" << endl;
	}
}
	

int main42() {
	int mainNum = 42;
	//创建圆心为(2,2)，半径为2的圆
	Circle c;//圆
	Point p;//圆心
	p.setx(2);
	p.sety(2);
	c.setCenter(p);
	c.setr(2);

	//创建点1
	Point p1;
	p1.setx(5);
	p1.sety(6);
	//判断点1与圆的位置关系
	judgePosition(p1, c);

	//创建点2
	Point p2;
	p2.setx(2);
	p2.sety(0);
	//判断点2与圆的位置关系
	judgePosition(p2, c);

	//创建点3
	Point p3;
	p3.setx(1);
	p3.sety(1);
	//判断点3与圆的位置关系
	judgePosition(p3, c);

	

	return 0;
}