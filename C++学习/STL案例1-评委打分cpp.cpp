#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<time.h>
using namespace std;
//STL��������ί���
//������������5��ѡ�֣�ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����ί����߷ֺ���ͷ֣�ȡƽ����

//ʵ�ֲ��裺
//1������5��ѡ�֣��ŵ�vector��
//2������vector������ȡ��ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
//3��sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
//4��deque��������һ�飬�ۼ��ܷ�
//5����ȡƽ����

//�������ѡ����
class Competitor {
private:
	string name;
	double score;//ƽ����
public:
	Competitor(string name,double score) {
		this->name = name;
		this->score = score;
	}
	string getName() {
		return this->name;
	}
	void setScore(double score) {
		this->score = score;
	}
	double getScore() {
		return this->score;
	}
};

void createCompetitor(vector<Competitor> &v) {//����5��ѡ�ֲ���ŵ���������
	for (int i = 0; i < 5;i++) {
		string nameSeed = "ABCDE";
		string nameHead = "ѡ��";
		string name = nameHead + nameSeed[i];
		cout << name << endl;
		int score = 0;
		Competitor comp(name, score);
		v.push_back(comp);
	}
}

void mark(vector<Competitor> &v) {//��ֺ���
	srand((unsigned int)time(NULL)); //�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	for (int i = 0; i < v.size(); i++) {
		deque<int> d;
		cout << "��ί��" << v[i].getName() << "��ʼ��֣�" << endl;
		for (int j = 0; j < 10; j++) {
			int score= rand() % 41 + 60;//ϵͳ����һ��60~100���������
			d.push_back(score);
			cout << "��ί"<<j+1<<"�����ϣ�" << endl;
		}
		cout << "��ί��" << v[i].getName() << "�����ϣ�" << endl;
		cout << "������飺" << endl;
		for (deque<int>::iterator it = d.begin(); it != d.end();it++) {
			cout << *it << " ";
		}
		cout << endl;
		cout << "��������С�����" << endl;
		sort(d.begin(),d.end());//��10����������
		cout << "����������飺" << endl;
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
		d.pop_front();//ȥ��һ����߷�
		d.pop_back();//ȥ��һ����ͷ�
		cout << "ȥ����߷ֺ���ͷֺ�������飺" << endl;
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
		double sumScore=0;
		for (int k = 0; k < d.size();k++) {
			sumScore += d[k];
		}
		cout << v[i].getName()<<"���ƽ����Ϊ��"<< sumScore/8 << endl;
		v[i].setScore(sumScore/8);//��ȡƽ���ֲ��洢������������

	}

}


int main118() {
	int mainNum = 118;
	vector<Competitor> v;//�������5��ѡ�ֵ�vector����
	createCompetitor(v);//����5��ѡ�ֲ���ŵ���������
	mark(v);//��ʼ���

	return 0;
}