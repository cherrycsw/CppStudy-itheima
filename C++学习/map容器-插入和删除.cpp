#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
//map���������ɾ��

//erase(key) ����keyɾ������Ԫ��
void printFor_each(const pair<int,string> &p) {
	cout << "(" << p.first << "," << p.second << ")" << " ";
}
void printMap1(const map<int, string> &m) {
	for (map<int, string>::const_iterator it = m.begin(); it != m.end(); it++) {
		cout << "(" << (*it).first << "," << (*it).second << ")" << " ";
	}
	cout << endl;
}

int main135() {
	int mainNum = 135;
	map<int, string> m;//Ĭ�Ϲ���
	//��һ�ֲ��뷽ʽ
	m.insert(pair<int, string>(0, "����"));
	//�ڶ��ֲ��뷽ʽ
	m.insert(make_pair(3, "����"));//�Ƽ�
	//�����ֲ��뷽ʽ
	m.insert(map<int, string>::value_type(2, "����"));
	//�����ֲ��뷽ʽ
	m[1] = "����";//������ʹ�� ���[]�е�keyֵ�����ڣ������map�������´���Ԫ��(key,) ����������������
	cout << m[5] << endl;
	
	printMap1(m);
	for_each(m.begin(),m.end(),printFor_each);
	
	m.erase(5);//����keyֵɾ��
	printMap1(m);

	return 0;
}