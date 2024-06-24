#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main7() {
	//系统生成一个1~100的随机整数
	srand((unsigned int)time(NULL)); //添加随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样
	int num=rand() % 100 + 1;//如果不加上面一行 则为伪随机数
	int a = 0;
	int flag = 0;
	int count=0;
	
	while (a != num) {
		if (count < 5) {
			if (flag == 0) {
				cout << "请输入你猜测的数字：";
				flag++;
			}
			cin >> a;
			count++;
			if (a > num) {
				cout << "你猜测的数字过大！请重新输入你要猜测的数字：" << endl;

			}
			else if (a == num) {
				cout << "恭喜你猜测正确！" << endl;
				//break;
			}
			else {
				cout << "你猜测的数字过小！请重新输入你要猜测的数字：" << endl;

			}
		}
		else {
			cout << "没在规定次数下猜对，退出游戏！" << endl;
			break; 
		}

	}
	
	return 0;
}