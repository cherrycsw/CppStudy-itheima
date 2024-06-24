#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//读二进制文件步骤：可以写自定义数据类型
//1、包含头文件
//#include<fstream>

//2、创建流对象
//ifstream ifs;

//3、打开文件
//ifs.open("文件路径", 打开方式binary)

//4、读数据
//原型函数：istream& read(char *buffer,int len)
//解释：字符指针buffer指向内存中一段存储空间， len是写的字节数

//5、关闭文件
//ifs.close();

class Person5 {//自定义数据类型
public:


	char m_Name[64];//姓名
	int m_Age;//年龄
};

int main77() {
	int mainNum = 77;
	char count[1024];

	//1、创建读数据的流对象
	ifstream ifs;

	//2、打开文件，方式操作：读文件
	ifs.open("person.txt", ios::in | ios::binary);

	//3、读数据
	
	if (ifs.is_open()) {
		Person5 p ;
		ifs.read((char *)&p, sizeof(Person5));
		cout << p.m_Name << endl;
		cout << p.m_Age<< endl;
	}
	else {
		cout<<"文件打开失败！"<<endl;
	}
	
	//4、关闭文件
	ifs.close();

	return 0;
}