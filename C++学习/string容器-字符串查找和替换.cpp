#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string���Һ��滻
//���ң������ַ����Ƿ����
//�滻����ָ����λ���滻�ַ���


int main100() {
	int mainNum = 100;
	//find �������Ҳ�
	string str1 = "abcdefg";
	int pos1=str1.find("de", 0);//�����ַ���"de"���ַ���str1�е�һ�γ���λ�ã���0���±꿪ʼ��
	cout << pos1 << endl;
	int pos2 = str1.find("hj", 0);
	cout << pos2<< endl;//-1��ʾδ�鵽

	//rfind ���������
	int pos3 = str1.rfind("de",0); //��������鲢��0���±꿪ʼ ����-1 ��ʾδ�鵽
	cout << pos3 << endl;
	int pos4 = str1.rfind("de", 6); //��������鲢��6���±꣨�ַ���β������ʼ �鵽��
	cout << pos4 << endl;

	string str2 = "abcdefgde";
	int pos5 = str2.find("de", 0);
	int pos6 = str2.rfind("de", 8);
	cout << pos5 << endl;
	cout << pos6 << endl;

	//�滻
	str1.replace(1,3,"1111");//��1���±���3���ַ��滻Ϊ"1111"
	cout <<str1 << endl;
	return 0;
}