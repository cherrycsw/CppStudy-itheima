#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//��ģ����̳У�����ģ�������̳�ʱ��Ҫע��һ�¼��㣺
//1��������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ��������T������,�����ָ�����������޷�����������ڴ�
//2����������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��

template<class T>//Base��ģ��
class Base {
public:
	T m;

};

//1��������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ��������T������
class Son1 :public Base<int> {//����ָ��������T�����ͣ���Ȼ����

};

//2����������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��
template<class T1,class T2>//Son��ģ��
class Son2 :public Base<T2> {
public:
	Son2() {
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
	}
public:
	T1 obj;
};

int main89() {
	int mainNum = 89;
	Son2<int ,char> s2;

	return 0;

}