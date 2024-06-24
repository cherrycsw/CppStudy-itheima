#include<iostream>
#include<string>
using namespace std;
/*����������
���һ��Ӣ�۵Ľṹ��������Ա���������䡢�Ա𣻴����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
*/


//Ӣ�۽ṹ��
struct Hero {
	//��Ա�б�
	string name;//Ӣ������
	int age;//Ӣ������
	string sex;//Ӣ���Ա�
};

//ð�������㷨
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

//��ӡ����
void print(Hero hero[]) {
	cout << "������Ӣ�ۣ�" << endl;
	for (int i = 0; i < 5;i++) {
		
		cout << "Ӣ�����ƣ�" << hero[i].name << " Ӣ�����䣺" << hero[i].age << " Ӣ���Ա�" << hero[i].sex << endl;
	}
}
//ð�������㷨2
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
	Hero hero[5] = { {"����",23,"��"},{"����",22,"��"},{"�ŷ�",20,"��"},{"����",21,"��"},{"����",19,"Ů"} };
	
	//bubbleSort(hero,5);
	bubbleSort2(hero, 5);
	print(hero);

	return 0;
}