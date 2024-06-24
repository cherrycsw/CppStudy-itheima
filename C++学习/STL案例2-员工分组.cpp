#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
using namespace std;
//STL����2��Ա������
//������������˾������Ƹ��10��Ա��(ABCDEFGH)��10��Ա�����빫˾����Ҫָ��Ա�����ĸ����Ź���
//Ա����Ϣ�У�������������ɣ����ŷ�Ϊ�߻����������з�
//�����10��Ա�����䲿�ź͹���
//ͨ��multimap������Ϣ�Ĳ��� key(���ű��)��value(Ա��)
//�ֲ�����ʾԱ����Ϣ

//ʵ�ֲ��裺
//1������10��Ա�����ŵ�vector��
//2������vector������ȡ��ÿ��Ա���������������
//3������󣬽�Ա�����ű����Ϊkey������Ա������Ϊvalue,�ŵ�multimap������
//4���ֲ�����ʾԱ����Ϣ
class Employee2{
public:
	string name;
	int salary;

};

void createEmp(vector<Employee2> &v) {
	srand((unsigned int)time(NULL)); //�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	for (int i = 0; i < 10; i++) {
		Employee2 e;
		string nameSeed = "ABCDEFGHIJ";
		string nameHead = "Ա��";
		string name = nameHead + nameSeed[i];
		int salary = rand() % 10001 + 10000;//ϵͳ����һ��10000~20000���������
		e.name = name;
		e.salary = salary;
		v.push_back(e);
	}
}
void group(vector<Employee2> &v, multimap<int, Employee2> &m) {//���麯��
	srand((unsigned int)time(NULL)); //�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	for (int i = 0; i < v.size();i++) {
		int deptId = rand() % 3 ;//ϵͳ����һ��0~2���������
		m.insert(make_pair(deptId, v[i]));
	}
 }
void printMapE(multimap<int, Employee2> &m) {
	cout << "�߻����ţ�" << endl;
	multimap<int, Employee2>::iterator pos = m.find(0);
	int count = m.count(0);
	int index = 0;
	for (; pos !=m.end()&&index<count ;pos++,index++) {
		cout << "[" << "���ű�ţ�" << (*pos).first << "," << "(" << "Ա��������" << (*pos).second.name << "," << "���ʣ�" << (*pos).second.salary << ")" << "]" << endl;
	}

	cout << "�������ţ�" << endl;
	pos = m.find(1);
	count = m.count(1);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "[" << "���ű�ţ�" << (*pos).first << "," << "(" << "Ա��������" << (*pos).second.name << "," << "���ʣ�" << (*pos).second.salary << ")" << "]" << endl;
	}

	cout << "�з����ţ�" << endl;
	pos = m.find(2);
	count = m.count(2);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "[" << "���ű�ţ�" << (*pos).first << "," << "(" << "Ա��������" << (*pos).second.name << "," << "���ʣ�" << (*pos).second.salary << ")" << "]" << endl;
	}

}

int main137() {
	int mainNum = 137;
	vector<Employee2> v;
	multimap<int, Employee2> m;
	createEmp(v);
	group(v,m);
	printMapE(m);
	return 0;
}