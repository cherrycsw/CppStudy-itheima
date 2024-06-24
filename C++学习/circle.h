#pragma once
#include<iostream>
#include"point.h"

using namespace std;

//圆类声明
class Circle {
private:
	Point c_center;//圆心本身也是一个Point对象
	double c_r;

public:
	void setCenter(Point &center);

	void setr(double r);

	Point getCenter();


	double getr();
};