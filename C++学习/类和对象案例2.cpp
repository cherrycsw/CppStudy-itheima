#include<iostream>
#include<string>
#include"point.h"
#include"circle.h"
using namespace std;

//������Ƶ��Բ
//������Բ��λ�ù�ϵ������Բ�⡢����Բ�ڡ�����Բ��

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
//	Point c_center;//Բ�ı���Ҳ��һ��Point����
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

//ȫ�ֺ����жϵ���Բ��λ�ù�ϵ
void judgePosition(Point &p, Circle &c) {
	double distance = (p.getx() - c.getCenter().getx()) * (p.getx() - c.getCenter().getx()) + 
					  (p.gety() - c.getCenter().gety()) * (p.gety() - c.getCenter().gety());
	
	double r2 = c.getr() * c.getr();
	
	if (distance>r2) {
		cout << "����Բ��!" << endl;
	}
	else if(distance == r2){
		cout << "����Բ��!" << endl;
	}
	else {
		cout << "����Բ��!" << endl;
	}
}
	

int main42() {
	int mainNum = 42;
	//����Բ��Ϊ(2,2)���뾶Ϊ2��Բ
	Circle c;//Բ
	Point p;//Բ��
	p.setx(2);
	p.sety(2);
	c.setCenter(p);
	c.setr(2);

	//������1
	Point p1;
	p1.setx(5);
	p1.sety(6);
	//�жϵ�1��Բ��λ�ù�ϵ
	judgePosition(p1, c);

	//������2
	Point p2;
	p2.setx(2);
	p2.sety(0);
	//�жϵ�2��Բ��λ�ù�ϵ
	judgePosition(p2, c);

	//������3
	Point p3;
	p3.setx(1);
	p3.sety(1);
	//�жϵ�3��Բ��λ�ù�ϵ
	judgePosition(p3, c);

	

	return 0;
}