#include<iostream>
#include<string>
using namespace std;
/*案例描述：
设计一个英雄的结构，包括成员姓名、年龄、性别；创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
*/


//英雄结构体
struct Hero {
	//成员列表
	string name;//英雄姓名
	int age;//英雄年龄
	string sex;//英雄性别
};

//冒泡排序算法
void bubbleSort(Hero hero[],int len) {
	for (int i = 0; i < 5;i++) {
		for (int j = 0; j < 5 - i - 1; j++) {
			if (hero[j].age > hero[j + 1].age) {
				Hero tmp = hero[j + 1];
				hero[j + 1]= hero[j];
				hero[j] = tmp;
			}
		}
	}
}

//打印函数
void print(Hero hero[]) {
	cout << "排序后的英雄：" << endl;
	for (int i = 0; i < 5;i++) {
		
		cout << "英雄名称：" << hero[i].name << " 英雄年龄：" << hero[i].age << " 英雄性别：" << hero[i].sex << endl;
	}
}
//冒泡排序算法2
void bubbleSort2(Hero *hero, int len) {
	Hero *tmpHero;
	for (int i = 0; i < 5; i++) {
		tmpHero = hero;
		for (int j = 0; j < 5 - i - 1; j++) {
			if (tmpHero->age > (tmpHero+1)->age) {

				string tmpName = (tmpHero+1)->name;
				(tmpHero + 1)->name = tmpHero->name;
				tmpHero->name = tmpName;

				int tmpAge = (tmpHero + 1)->age;
				(tmpHero + 1)->age = tmpHero->age;
				tmpHero->age = tmpAge;

				string tmpSex = (tmpHero + 1)->sex;
				(tmpHero + 1)->sex = tmpHero->sex;
				tmpHero->sex = tmpSex;
			}
			tmpHero++;
		}
	}
}

int main30() {
	Hero hero[5] = { {"刘备",23,"男"},{"关羽",22,"男"},{"张飞",20,"男"},{"赵云",21,"男"},{"貂蝉",19,"女"} };
	
	//bubbleSort(hero,5);
	bubbleSort2(hero, 5);
	print(hero);

	return 0;
}