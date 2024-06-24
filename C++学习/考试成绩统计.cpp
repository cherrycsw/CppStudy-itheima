#include<iostream>
#include<string>
using namespace std;

int main17() {
	/*
	有三名同学（张三、李四、王五），成绩如下：
	          语文      数学      英语
	张三      100       100	      100

	李四      90        50        100

	王五      60        70        80
	请分别输出三位同学的总成绩。
	*/
	int arr[3][3] = 
	{ 
		{100,100,100},
		{90, 50, 100},
	    {60, 70, 80}
	};
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum += arr[i][j];
		}
		switch (i)
		{
		case 0:
			cout << "张三的总成绩为：" << sum << endl;
			break;
		case 1:
			cout << "李四的总成绩为：" << sum << endl;
			break;
		default:
			cout << "王五的总成绩为：" << sum << endl;
			break;
		}
		sum = 0;
	}
	return 0;
}