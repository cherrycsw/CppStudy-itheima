#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//���������ļ����裺����д�Զ�����������
//1������ͷ�ļ�
//#include<fstream>

//2������������
//ifstream ifs;

//3�����ļ�
//ifs.open("�ļ�·��", �򿪷�ʽbinary)

//4��������
//ԭ�ͺ�����istream& read(char *buffer,int len)
//���ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬 len��д���ֽ���

//5���ر��ļ�
//ifs.close();

class Person5 {//�Զ�����������
public:


	char m_Name[64];//����
	int m_Age;//����
};

int main77() {
	int mainNum = 77;
	char count[1024];

	//1�����������ݵ�������
	ifstream ifs;

	//2�����ļ�����ʽ���������ļ�
	ifs.open("person.txt", ios::in | ios::binary);

	//3��������
	
	if (ifs.is_open()) {
		Person5 p ;
		ifs.read((char *)&p, sizeof(Person5));
		cout << p.m_Name << endl;
		cout << p.m_Age<< endl;
	}
	else {
		cout<<"�ļ���ʧ�ܣ�"<<endl;
	}
	
	//4���ر��ļ�
	ifs.close();

	return 0;
}