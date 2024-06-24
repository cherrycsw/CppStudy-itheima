#include<iostream>
#include<string>
using namespace std;
//�������������

class MyInteger {
	friend MyInteger &operator++(MyInteger &myint);
	friend ostream &operator<<(ostream &cout, MyInteger myint);
	friend MyInteger operator++(MyInteger &myint, int);

private:
	int m_Num;

public:
	MyInteger() {
		m_Num = 0;
	}
	//1ǰ�õ���
	//MyInteger &operator++() {//��������
	//	m_Num++;
	//	return *this;
	//}

	//2���õ���
	//MyInteger operator++(int) {//int����ռλ��������������ǰ�ú��õ���
	//	//�ȼ�¼��ʱ���
	//	MyInteger temp = *this;
	//	//�����
	//	m_Num++;
	//	//��󽫼�¼�������
	//	return temp;
	//}

};  

//4��ȫ�ֺ�������ǰ�õ��������

MyInteger &operator++(MyInteger &myint) {
	myint.m_Num= myint.m_Num+1;
	return myint;
}

//3��ȫ�ֺ����������������
ostream &operator<<(ostream &cout, MyInteger myint) {
	cout <<myint.m_Num;
	return cout;
}

//4��ȫ�ֺ������غ��õ��������

MyInteger operator++(MyInteger &myint,int) {
	MyInteger temp = myint;
	myint.m_Num++;
	return temp;
}


int main59() {
	int mainNum = 59;

	MyInteger myint1;
	cout<<++(++myint1)<< endl;
	MyInteger myint2;
	cout <<myint2++ << endl;
	cout << myint2 << endl;
	return 0;

}