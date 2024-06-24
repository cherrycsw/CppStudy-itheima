#include<iostream>
#include<string>
using namespace std;

//案例设计立方体（Cube）
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体体积是否相等

class Cube {
private:
	double c_L;
	double c_W;
	double c_H;

public:
	void set(double L, double W, double H) {
		c_L = L;
		c_W = W;
		c_H = H;
	}

	double getL() {
		return c_L;
	}

	double getW() {
		return c_W;
	}

	double getH() {
		return c_H;
	}

	double calArea() {
		return c_L * c_W * 2 + c_L * c_H * 2 + c_W * c_H * 2;
	}

	double calVolume() {
		return c_L * c_W * c_H;
	}

	//成员函数判断两个立方体是否相同
	bool m_equal(Cube &c2) {
		if (c_L==c2.getL() && c_W == c2.getW() && c_H == c2.getH()) {
			return true;
		}
		else {
			return false;
		}
	}
};

//全局函数判断两个立方体是否相同
bool g_equal(Cube &c1, Cube &c2) {
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	else {
		return false;
	}
}

int main41() {
	int mainNum = 41;

	Cube cube1;
	cube1.set(10, 10, 10);
	Cube cube2;
	cube2.set(10, 10, 10);
	cout << "cube1的面积："<<cube1.calArea() << "\tcube1的体积：" << cube1.calVolume() << endl;
	//
	if (cube1.m_equal(cube2)) {
		cout << "成员函数 两个立方体相等" << endl;
	}
	else {
		cout << "成员函数 两个立方体不相等" << endl;
	}

	if (g_equal(cube1, cube2)) {
		cout << "全局函数 两个立方体相等" << endl;
	}
	else {
		cout << "全局函数 两个立方体不相等" << endl;
	}


	return 0;
}