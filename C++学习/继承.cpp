#include<iostream>
#include<string>
using namespace std;
//�̳�
//�¼���ĳ�Ա����ӵ����һ����Ĺ��ԣ������Լ������ԣ������ظ�����

//1�����ü̳м��� ����
//Javaҳ��
//class Java {
//public:
//	void header() {//ͷ����Ϣ
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//
//	void footer() {//�ײ���Ϣ
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//
//	void left() {//�������Ϣ
//		cout << "Java��Python��C++...�����������б�" << endl;
//	}
//
//	void content() {//�м���Ƶ��Ϣ
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//
//};
//
////Pythonҳ��
//class Python {
//public:
//	void header() {//ͷ����Ϣ
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//
//	void footer() {//�ײ���Ϣ
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//
//	void left() {//�������Ϣ
//		cout << "Java��Python��C++...�����������б�" << endl;
//	}
//
//	void content() {//�м���Ƶ��Ϣ
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//
//};
//
//C++ҳ��
//class CPP {
//public:
//	void header() {//ͷ����Ϣ
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//
//	void footer() {//�ײ���Ϣ
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//
//	void left() {//�������Ϣ
//		cout << "Java��Python��C++...�����������б�" << endl;
//	}
//
//	void content() {//�м���Ƶ��Ϣ
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//
//};

//2��ʹ�ü̳м���
//����ҳ��
class BasePage {
public:
	void header() {//ͷ����Ϣ
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}

	void footer() {//�ײ���Ϣ
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}

	void left() {//�������Ϣ
		cout << "Java��Python��C++...�����������б�" << endl;
	}
};

//Javaҳ��
class Java :public BasePage {
public:
	void content() {//�м���Ƶ��Ϣ
		cout << "Javaѧ����Ƶ" << endl;
	}
};

//Pythonҳ��
class Python :public BasePage {
public:
	void content() {//�м���Ƶ��Ϣ
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

//C++ҳ��
class CPP :public BasePage {
public:
	void content() {//�м���Ƶ��Ϣ
		cout << "C++ѧ����Ƶ" << endl;
	}
};

int main63() {
	int mainNum = 63;
	cout << "Java������Ƶҳ�����£�" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "----------------------------------------" << endl;
	cout << "Python������Ƶҳ�����£�" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "----------------------------------------" << endl;
	cout << "C++������Ƶҳ�����£�" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
	//�ܽ᣺
	//�̳еĺô��������ظ�����
	//�﷨��class ����(������)�� : �̳з�ʽ ����(����)��

	return 0;
}