#pragma once
#include<iostream>
using namespace std;

//点类的声明
class Point {
private:
	double p_x;
	double p_y;

public:
	void setx(double x);

	void sety(double y);

	double getx();

	double gety();
};
