#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
using namespace std;
//�����������ʹ��
//������غ������ò�����()���࣬����󳣳�Ϊ��������
//      ��������ʹ�����ص�()ʱ����Ϊ���ƺ������ã�Ҳ�зº���
//���ʣ���������(�º���)��һ���಻��һ������

class MyAdd {
public:
	MyAdd() {
		this->count = 0;
	}

	int operator()(int v1,int v2) {
		this->count++;//ͳ�ƺ���������ô���
		return v1 + v2;	
	}

public:
	int count;
};

void doPrint(MyAdd &ma,int v1,int v2) {
	cout << ma(v1, v2) << endl;
}


int main138() {
	int mainNum = 138;
	//���������ص㣺
	//1������������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
	MyAdd myadd;
	cout << myadd(2,3)<<endl;
	cout << MyAdd()(2, 3)<< endl;

	//2���������󳬳���ͨ�����ĸ����������������Լ���״̬
	cout << myadd(2, 3) << endl;
	cout << myadd.count << endl;//���ó�Ա����ͳ�ƺ���������ô�����ͳ����ͨ�������ô����Ļ�һ����ȫ�ֱ�����̬��������������˺�������������Լ���״̬
	
	//3���������������Ϊ��������
	doPrint(myadd, 2, 3);

	return 0;
}