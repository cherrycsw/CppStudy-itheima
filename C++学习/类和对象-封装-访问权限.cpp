#include<iostream>
#include<string>
using namespace std;

//三种权限
//公共权限  public     类内可以访问  类外可以访问
//保护权限  protected  类内可以访问  类外不可访问  继承：儿子可以访问父亲中的保护内容
//私有权限  private    类内可以访问  类外不可访问		 儿子不可以访问父亲的私有内容

class Students {
public:
	string s_name;

protected:
	string s_address;

private:
	int s_password;

public:
	//赋值
	Students() {
		s_name = "张三";
		s_address = "武汉";
		s_password = 123456;
	}
};

int main39() {
	int mainNum = 39;

	Students stu; 
	//stu.s_password= 123;
	cout << stu.s_name << endl;
	
	return 0;
}