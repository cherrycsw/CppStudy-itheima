#include<iostream>
#include<string>
using namespace std;
//�����������ֱ�������ͨд���Ͷ�̬���������������������������ļ�������

//��̬���ŵ㣺1��������֯�ṹ����  2���ɶ���ǿ  3������ǰ�ںͺ��ڵ���չ��ά��

//��ͨʵ��
class Calculator1 {
public:
	int getResult(string s) {
		if (s=="+") {
			return m_Num1 + m_Num2;
		}
		else if (s == "-") {
			return m_Num1 - m_Num2;
		}
		else if (s == "*") {
			return m_Num1 * m_Num2;
		}
		//�������չ�µĹ��ܣ���Ҫ�޸�Դ��   ����ʵ�����У��ᳫ����ԭ�򣺶���չ���п��������޸Ľ��йر�
		else if(s == "/"){
			return m_Num1 / m_Num2;
		}
	}

public:
	int m_Num1;
	int m_Num2;
};

//��̬ʵ��
//��ʵ�ּ���������
class AbstractCalculator {
public:
	virtual int getResult() {
		return 1;
	}
	
	int m_Num1;
	int m_Num2;
};

//�ӷ���������
class AddCalculator:public AbstractCalculator {
public:
	int getResult() {
		return m_Num1+ m_Num2;
	}
};

//������������
class SubCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 - m_Num2;
	}
};

//�˷���������
class MutiCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 * m_Num2;
	}
};

//������������
class DiviCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 / m_Num2;
	}
};

int main69() {
	int mainNum = 69;
	Calculator1 cal1;
	cal1.m_Num1 = 10;
	cal1.m_Num2 = 2;
	cout << "result=" << cal1.getResult("/")<< endl;

	//��̬ʹ���������������û�ָ��ָ���������

	//�ӷ�����
	AbstractCalculator *Abcal= new AddCalculator;
	Abcal->m_Num1 = 10;
	Abcal->m_Num2 = 2;
	cout << "result=" << Abcal->getResult() << endl;
	delete Abcal;

	//��������
	Abcal = new SubCalculator;
	Abcal->m_Num1 = 10;
	Abcal->m_Num2 = 2;
	cout << "result=" << Abcal->getResult() << endl;
	delete Abcal;
	return 0;

	//�ܽ᣺C++�����ᳫ���ö�̬��Ƴ���ܹ�����Ϊ��̬�ŵ�ܶ�
}