#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//读文件步骤：
//1、包含头文件
//#include<fstream>

//2、创建流对象
//ifstream ifs;

//3、打开文件
//ofs.open("文件路径", 打开方式)

//4、读数据
//四种读取方式

//5、关闭文件
//ifs.close();

int main75() {
	int mainNum = 75;
	char count[1024];

	//1、创建读数据的流对象
	ifstream ifs;

	//2、打开文件，方式操作：读文件
	ifs.open("test.txt", ios::in);

	if (ifs.is_open()) {
		//3、读数据-四种方式

		//第一种：
		char buf1[1024] = { 0 };
		while (ifs >> buf1) {//一行行输入
			cout << buf1 << endl;
		
		}

		/*//第二种
		char buf2[1024] = { 0 };
		char *temp;
		while (ifs.getline(buf2,sizeof(buf2))) {
			cout << buf2 << endl;
		}*/
		

		/*//第三种
		string buf3;
		while (getline(ifs,buf3)) {
			cout << buf3 << endl;
			
		}*/
		

		/*//第四种 不太推荐
		char c;
		while ((c=ifs.get())!=EOF) {//end of file
			cout << c;
		}*/

		ifs.close();
	}
	else {
		cout << "文件打开失败！" << endl;
	}
	

	return 0;
}