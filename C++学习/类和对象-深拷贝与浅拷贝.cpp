#include<iostream>
#include<string>
using namespace std;
//深拷贝与浅拷贝

class Person2 {
private:
	string p_name;
	string p_sex;
	int p_age;
	int *p_height;//身高开辟到堆区

public:
	//默认构造函数
	Person2() {
		cout << "Person2默认构造函数调用" << endl;
	}

	//有参构造函数
	Person2(int age,int height) {
		p_age = age;
		p_height=new int(height);
		cout << "Person2默认构造函数调用" << endl;
	}

	//深拷贝构造函数
	Person2(const Person2 &p) {
		p_age = p.p_age;
		p_height = new int(*p.p_height);//开辟新的堆内存 
		cout << "Person2拷贝构造函数调用" << endl;
	}

	//析构函数
	~Person2()
	{
		//析构代码，将堆区开辟数据做释放操作 
		if (p_height != NULL) {
			delete p_height;
			p_height = NULL;
		}
		cout << "Person2析构函数调用" << endl;
	}

	int getAge() {
		return p_age;
	}

	int getHeight() {
		return *p_height;
	}
};

int main47() {
	int mainNum = 47;
	Person2 p1(18,160);
	cout << "p1年龄为：" <<p1.getAge()<<"  身高为："<<p1.getHeight()<< endl;

	Person2 p2(p1);//浅拷贝带来的问题就是堆区内存重复释放
	cout << "p2年龄为：" << p2.getAge() << "  身高为：" << p2.getHeight() << endl;

	return 0;

}