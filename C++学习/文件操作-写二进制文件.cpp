#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//д�������ļ����裺����д�Զ�����������
//1������ͷ�ļ�
//#include<fstream>

//2������������
//ofstream ofs;

//3�����ļ�
//ofs.open("�ļ�·��", �򿪷�ʽbinary)

//4��д����
//ԭ�ͺ�����ostream& write(const char *buffer,int len)
//���ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬 len��д���ֽ���

//5���ر��ļ�
//ofs.close();

class Person4 {//�Զ�����������
public:
	

	char m_Name[64];//����
	int m_Age;//����
};

int main76() {
	int mainNum = 76;
	char count[1024];

	//1�����������ݵ�������
	ofstream ofs;

	//2�����ļ�����ʽ���������ļ�
	ofs.open("person.txt", ios::out|ios::binary);

	Person4 p = { "����", 18 };

	ofs.write((const char *)&p,sizeof(Person4));
	
	ofs.close();

	return 0;
}