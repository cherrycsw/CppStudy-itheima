#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//��������ʱ���������ݶ�������ʱ���ݣ�����һ�����н��������ͷ�
//�ļ���������ͷ�ļ���<fstream> �ֿ��Զ��ֿ���д
//�����ļ��������ࣺ
//1��ofstream��д�ļ�
//2��ifstream�����ļ�
//3��fstream����д����

//д�ļ����裺
//1������ͷ�ļ�
//#include<fstream>

//2������������
//fstream ofs;

//3�����ļ�
//ofs.open("�ļ�·��", �򿪷�ʽ)

//4��д�ļ�
//ofs << "д������";

//5���ر��ļ�
//ofs.close();

int main74() {
	int mainNum = 74;
	ofstream ofs;
	ofs.open("test.txt",ios::out);
	ofs << "����������ΰ" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺20" << endl;
	ofs.close();

	return 0;
}