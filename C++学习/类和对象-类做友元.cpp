#include<iostream>
#include<string>
using namespace std;
//������Ԫ

//��������
class Buildings {

	//GoodGay����Building�����ѣ����Է���Building�е�˽�г�Ա
	friend class GoodGay;

public:
	string m_SittingRoom;//����

private:
	string m_BedRoom;//����

public:
	Buildings();//��������������ʵ��

};

class GoodGay {

public:
	Buildings *building;

public:
	GoodGay();//��������������ʵ��
	void visit();//�ιۺ��� ����Building�е�����

};

Buildings::Buildings() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay() {
	//�������������
	building = new Buildings;
}

void GoodGay::visit() {
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�"<<building->m_BedRoom << endl;
}


int main56() {
	int mainNum = 56;
	GoodGay g;
	g.visit();
	cout << (1 - 3) % 4 << endl;



	return 0;

}