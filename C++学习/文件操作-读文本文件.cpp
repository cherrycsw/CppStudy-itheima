#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//���ļ����裺
//1������ͷ�ļ�
//#include<fstream>

//2������������
//ifstream ifs;

//3�����ļ�
//ofs.open("�ļ�·��", �򿪷�ʽ)

//4��������
//���ֶ�ȡ��ʽ

//5���ر��ļ�
//ifs.close();

int main75() {
	int mainNum = 75;
	char count[1024];

	//1�����������ݵ�������
	ifstream ifs;

	//2�����ļ�����ʽ���������ļ�
	ifs.open("test.txt", ios::in);

	if (ifs.is_open()) {
		//3��������-���ַ�ʽ

		//��һ�֣�
		char buf1[1024] = { 0 };
		while (ifs >> buf1) {//һ��������
			cout << buf1 << endl;
		
		}

		/*//�ڶ���
		char buf2[1024] = { 0 };
		char *temp;
		while (ifs.getline(buf2,sizeof(buf2))) {
			cout << buf2 << endl;
		}*/
		

		/*//������
		string buf3;
		while (getline(ifs,buf3)) {
			cout << buf3 << endl;
			
		}*/
		

		/*//������ ��̫�Ƽ�
		char c;
		while ((c=ifs.get())!=EOF) {//end of file
			cout << c;
		}*/

		ifs.close();
	}
	else {
		cout << "�ļ���ʧ�ܣ�" << endl;
	}
	

	return 0;
}