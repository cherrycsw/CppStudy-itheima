#include<iostream>
#include<string>
using namespace std;
//ȫ�ֺ�������Ԫ

//��������
class Building {

	//goodGayȫ�ֺ�����Building�����ѣ����Է���Building�е�˽�г�Ա
	friend void goodGay(Building &building);

public:
	string m_SittingRoom;//����

private:
	string m_BedRoom;//����

public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

};

//ȫ�ֺ���
void goodGay(Building &building) {
	cout << "�û���ȫ�ֺ������ڷ��ʣ�"<<building.m_SittingRoom<< endl;
	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << building.m_BedRoom << endl;
}

int main55() {
	int mainNum = 55;
	Building b;
	goodGay(b);



	return 0;

}