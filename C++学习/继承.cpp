#include<iostream>
#include<string>
using namespace std;
//继承
//下级别的成员除了拥有上一级别的共性，还有自己的特性，减少重复代码

//1、不用继承技术 菜鸟
//Java页面
//class Java {
//public:
//	void header() {//头部信息
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void footer() {//底部信息
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//
//	void left() {//左侧栏信息
//		cout << "Java、Python、C++...（公共分类列表）" << endl;
//	}
//
//	void content() {//中间视频信息
//		cout << "Java学科视频" << endl;
//	}
//
//};
//
////Python页面
//class Python {
//public:
//	void header() {//头部信息
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void footer() {//底部信息
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//
//	void left() {//左侧栏信息
//		cout << "Java、Python、C++...（公共分类列表）" << endl;
//	}
//
//	void content() {//中间视频信息
//		cout << "Python学科视频" << endl;
//	}
//
//};
//
//C++页面
//class CPP {
//public:
//	void header() {//头部信息
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void footer() {//底部信息
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//
//	void left() {//左侧栏信息
//		cout << "Java、Python、C++...（公共分类列表）" << endl;
//	}
//
//	void content() {//中间视频信息
//		cout << "C++学科视频" << endl;
//	}
//
//};

//2、使用继承技术
//公共页面
class BasePage {
public:
	void header() {//头部信息
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}

	void footer() {//底部信息
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}

	void left() {//左侧栏信息
		cout << "Java、Python、C++...（公共分类列表）" << endl;
	}
};

//Java页面
class Java :public BasePage {
public:
	void content() {//中间视频信息
		cout << "Java学科视频" << endl;
	}
};

//Python页面
class Python :public BasePage {
public:
	void content() {//中间视频信息
		cout << "Python学科视频" << endl;
	}
};

//C++页面
class CPP :public BasePage {
public:
	void content() {//中间视频信息
		cout << "C++学科视频" << endl;
	}
};

int main63() {
	int mainNum = 63;
	cout << "Java下载视频页面如下：" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "----------------------------------------" << endl;
	cout << "Python下载视频页面如下：" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "----------------------------------------" << endl;
	cout << "C++下载视频页面如下：" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
	//总结：
	//继承的好处：减少重复代码
	//语法：class 子类(派生类)名 : 继承方式 父类(基类)名

	return 0;
}