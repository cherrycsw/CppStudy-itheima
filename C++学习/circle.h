#pragma once
#include<iostream>
#include"point.h"

using namespace std;

//Բ������
class Circle {
private:
	Point c_center;//Բ�ı���Ҳ��һ��Point����
	double c_r;

public:
	void setCenter(Point &center);

	void setr(double r);

	Point getCenter();


	double getr();
};