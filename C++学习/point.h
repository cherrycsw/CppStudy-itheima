#pragma once
#include<iostream>
using namespace std;

//���������
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
