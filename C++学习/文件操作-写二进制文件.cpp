#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//写二进制文件步骤：可以写自定义数据类型
//1、包含头文件
//#include<fstream>

//2、创建流对象
//ofstream ofs;

//3、打开文件
//ofs.open("文件路径", 打开方式binary)

//4、写数据
//原型函数：ostream& write(const char *buffer,int len)
//解释：字符指针buffer指向内存中一段存储空间， len是写的字节数

//5、关闭文件
//ofs.close();

class Person4 {//自定义数据类型
public:
	

	char m_Name[64];//姓名
	int m_Age;//年龄
};

int main76() {
	int mainNum = 76;
	char count[1024];

	//1、创建读数据的流对象
	ofstream ofs;

	//2、打开文件，方式操作：读文件
	ofs.open("person.txt", ios::out|ios::binary);

	Person4 p = { "张三", 18 };

	ofs.write((const char *)&p,sizeof(Person4));
	
	ofs.close();

	return 0;
}