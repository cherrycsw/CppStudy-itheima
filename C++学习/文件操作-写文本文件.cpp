#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//程序运行时产生的数据都属于临时数据，程序一旦运行结束都被释放
//文件操作包含头文件：<fstream> 又可以读又可以写
//操作文件的三大类：
//1、ofstream：写文件
//2、ifstream：读文件
//3、fstream：读写操作

//写文件步骤：
//1、包含头文件
//#include<fstream>

//2、创建流对象
//fstream ofs;

//3、打开文件
//ofs.open("文件路径", 打开方式)

//4、写文件
//ofs << "写入数据";

//5、关闭文件
//ofs.close();

int main74() {
	int mainNum = 74;
	ofstream ofs;
	ofs.open("test.txt",ios::out);
	ofs << "姓名：陈申伟" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：20" << endl;
	ofs.close();

	return 0;
}