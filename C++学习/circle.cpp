#include"circle.h"

//Բ���к�����ʵ��
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