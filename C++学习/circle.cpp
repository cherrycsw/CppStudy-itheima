#include"circle.h"

//圆类中函数的实现
void Circle::setCenter(Point &center) {
	c_center = center;
}

void Circle::setr(double r) {
	c_r = r;
}

Point Circle::getCenter() {
	return c_center;
}


double Circle::getr() {
	return c_r;
}