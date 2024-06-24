#include<iostream>
#include<string>
#include<fstream>
#include<queue>
using namespace std;

//ְ������ϵͳ���ܣ�
//ְ������ϵͳ������������˾������Ա����Ϣ�����̳���Ҫ����C++��ʵ��һ�����ڶ�̬��ְ������ϵͳ

//ְ������ϵͳ��Ա���ܣ�
//��˾��ְ����Ϊ���ࣺ��ͨԱ���������ϰ壬��ʾ��Ϣʱ��Ҫ��ʾְ����š�ְ��������ְ����λ���Լ�ְ��
//��ͨԱ������ɾ�����������
//����ְ������ϰ�������񣬲��·���Ա��
//�ϰ�ְ�𣺹���˾��������

//����ϵͳ����Ҫʵ�ֵĹ������£�
//�˳���������˳���ǰ����ϵͳ
//����ְ����Ϣ��ʵ���������ְ�����ܣ�����Ϣ¼�뵽�ļ��У�ְ����ϢΪ��ְ����š����������ű��
//��ʾְ����Ϣ����ʾ��˾������ְ����Ϣ
//ɾ����ְְ�������ձ��ɾ��ָ����ְ��
//�޸�ְ����Ϣ�����ձ���޸�ְ��������Ϣ
//����ְ����Ϣ������ְ���ı�Ż���ְ�����������������Ա��Ϣ�Ĳ���
//���ձ�����򣺰���ְ����ţ�������������������û�ָ��
//��������ĵ�������ļ��м�¼������ְ����Ϣ�����ǰ���ٴ�ȷ�ϣ���ֹ��ɾ��

//ְ����
class Staff {
public:
	virtual void show() = 0;
public:
	int m_StaffId;//ְ�����
	string m_Name;//ְ������
	int m_DepartmentId;//ְ�����ű��
	string m_Post;//ְ����λ
	string m_Responsibility;//ְ��ְ��
};

//Ա����
class CommonStaff:public Staff {
public:
	CommonStaff(int staffId,string name) {
		this->m_StaffId = staffId;
		this->m_Name = name;
		this->m_DepartmentId = 1;
		this->m_Post = "Ա��";
		this->m_Responsibility = "��ɾ�����������";
	}
	virtual void show() {
		cout << "ְ����ţ�" << this->m_StaffId << "\tְ��������" << this->m_Name << "\t��λ��" << this->m_Post << "\t��λְ��" << this->m_Responsibility << endl;
	}
};

//������
class Manager :public Staff {
public:
	Manager(int staffId, string name) {
		this->m_StaffId = staffId;
		this->m_Name = name;
		this->m_DepartmentId = 2;
		this->m_Post = "����";
		this->m_Responsibility = "����ϰ�������񣬲��·���Ա��";
	}
	virtual void show() {
		cout << "ְ����ţ�" << this->m_StaffId << "\tְ��������" << this->m_Name << "\t��λ��" << this->m_Post << "\t��λְ��" << this->m_Responsibility << endl;
	}
};

//�ܲ���
class President :public Staff {
public:
	President(int staffId, string name) {
		this->m_StaffId = staffId;
		this->m_Name = name;
		this->m_DepartmentId = 3;
		this->m_Post = "�ܲ�";
		this->m_Responsibility = "����˾��������";
	}
	virtual void show() {
		cout << "ְ����ţ�" << this->m_StaffId << "\tְ��������" << this->m_Name << "\t��λ��" << this->m_Post << "\t��λְ��" << this->m_Responsibility << endl;
	}
};

//д�ļ���������
void writeIntoFile(Staff* staff[],int num) {
	ofstream ofs;
	ofs.open("empFile.txt", ios::out);//�ļ�β��д���ı��ļ�
	while (staff[num] != NULL) {
		ofs << staff[num]->m_StaffId << " ";
		ofs << staff[num]->m_Name << " ";
		ofs << staff[num]->m_DepartmentId << endl;
		num++;
	}
	ofs.close();
}

//����ְ����Ϣ����
void insertStaffInfo(Staff* staff[]) {
	int insertNum;
	int newStaffId;
	string newStaffName;
	int newStaffPost;
	int count = 0;
	
	cout << "����������ְ��������" << endl;
	cin >> insertNum;
	for (int i = 0; i < 1000; i++) {
		if (staff[i] == NULL) {
			count = i;
			break;
		}
		if (i == 999 && staff[999] != NULL) {
			count = 1000;
			break;
		}
	}
	if (insertNum <= 1000 - count) {
		for (int i = count; i < count+insertNum; i++) {
			cout << "�������" << i-count+1 << "����ְ����ţ�" << endl;
			cin >> newStaffId;
			cout << "�������" << i-count+1 << "����ְ��������" << endl;
			cin >> newStaffName;
			cout << "��ѡ���ְ���ĸ�λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ܲ�" << endl;
			cin >> newStaffPost;
			switch (newStaffPost) {
			case 1: {
				staff[i] = new CommonStaff(newStaffId, newStaffName);
				break;
			}
			case 2: {
				staff[i] = new Manager(newStaffId, newStaffName);
				break;
			}
			case 3: {
				staff[i] = new President(newStaffId, newStaffName);
				break;
			}
			default: {
				cout << "��������ַ���������1-3��ѡ��" << endl;
				break;
			}

			}
		}
		
		writeIntoFile(staff, 0);
		cout << "�ɹ����" <<insertNum<<"����ְ����"<< endl;
	}
	else {
		cout << "��Ҫ��ӵ���������ϵͳ���ޣ������������ɾ��ְ����Ϣ����ӣ�" << endl;
	}
	
}

//��ʾְ����Ϣ����
void printStaffInfo(Staff *staff[]) {
	int count = 0;
	for (int i = 0; i < 1000; i++) {
		if (staff[i] == NULL) {
			count = i;
			break;
		}
		if (i == 999 && staff[999] != NULL) {
			count = 1000;
			break;
		}
	}
	if (count == 0) {
		cout << "ְ����ϢΪ�գ�����ӣ�" << endl;
	}
	else {
		for (int i = 0; i < count;i++) {
			staff[i]->show();
		}
	}
}

//ɾ����ְְ������
void deleteStaff(Staff *staff[]) {
	int deleteStaffId;
	int count1 = 0;
	queue<int> myQueue;
	int myQueueSize;
	//ͳ�Ƶ�ǰϵͳ��Ա����Ŀ
	for (int i = 0; i < 1000; i++) {
		if (staff[i] == NULL) {
			count1 = i;
			break;
		}
		if (i == 999 && staff[999] != NULL) {
			count1 = 1000;
			break;
		}
	}
	if (count1 == 0) {
		cout << "ְ����ϢΪ�գ�ɾ��ʧ�ܣ�" << endl;
	}
	else {
		cout << "��������Ҫɾ����ְ���ţ�" << endl;
		cin >> deleteStaffId;
		//ͳ��staff��m_StaffId == deleteStaffId�ĸ���������ȡÿ��staff������ָ��������ѹ�뵽������
		for (int i = 0; i < count1;i++) {
			if (staff[i]->m_StaffId == deleteStaffId) {
				myQueue.push(i);
			}
		}
		myQueueSize = myQueue.size();
		if (myQueueSize == 0) {
			cout << "ɾ��ʧ�ܣ�ϵͳ��û����ѡid" << endl;
		}
		else {
			//ɾ��m_StaffId == deleteStaffId��Ա������
			for (int i = 0; i < myQueueSize; i++) {
				delete staff[myQueue.front() - i];

				//��ɾ���������Ķ�����ǰ�ƶ�
				for (int j = myQueue.front(); j < count1 - 1; j++) {
					staff[j] = staff[j + 1];
				}

				//�����һ��Ԫ���ÿ�
				staff[count1 - 1] = NULL;

				count1--;//ɾ��һ������󣬶�������һ
				myQueue.pop();//ɾ����󵯳���ɾ��������
			}
			cout << "ɾ���ɹ���" << endl;
			
		}
			
	}
	writeIntoFile(staff, 0);
	
}

//�޸�ְ����Ϣ����
void updateStaffInfo(Staff *staff[]) {
	int updStaffId;
	int newUpdStaffId;
	string newUpdName;
	int newUpdPost;
	int num = 0;
	int count;
	int index=0;
	//ͳ�Ƶ�ǰϵͳ��Ա����Ŀ
	for (int i = 0; i < 1000; i++) {
		if (staff[i] == NULL) {
			count = i;
			break;
		}
		if (i == 999 && staff[999] != NULL) {
			count = 1000;
			break;
		}
	}
	if (count == 0) {
		cout << "ְ����ϢΪ�գ��޸�ʧ�ܣ�" << endl;
	}
	else {
		//��ʼ�޸�
		cout << "�������޸�ְ���ı�ţ�" << endl;
	FLAGG:
		cin >> updStaffId;
		for (int i = 0; i < count; i++) {
			if (staff[i]->m_StaffId == updStaffId) {
				num++;
				index = i;
				break;
			}
		}
		if (num == 0) {
			cout << "δ�鵽��ְ�������������룡" << endl;
			goto FLAGG;
		}
		else {
			cout << "�鵽��" << staff[index]->m_StaffId << "��Ա������������ְ���ţ�" << endl;
			cin >> newUpdStaffId;
			cout << "��������������" << endl;
			cin >> newUpdName;
			cout << "�������¸�λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ܲ�" << endl;
			cin >> newUpdPost;
			delete staff[index];
			staff[index] = NULL;
			switch (newUpdPost) {
			case 1: {
				staff[index] = new CommonStaff(newUpdStaffId, newUpdName);
				cout << "�޸ĳɹ���" << endl;
				break;
			}
			case 2: {
				staff[index] = new Manager(newUpdStaffId, newUpdName);
				cout << "�޸ĳɹ���" << endl;
				break;
			}
			case 3: {
				staff[index] = new President(newUpdStaffId, newUpdName);
				cout << "�޸ĳɹ���" << endl;
				break;
			}
			default: {
				cout << "��������ַ���������1-3��ѡ��" << endl;
				break;
			}

			}
		}

	}
	
}

//����ְ����Ϣ����
void searchStaffInfo(Staff *staff[]) {
	int count;
	int searchNum;
	int searchStaffId;
	string searchStaffName;
	int unEqualNum=0;
	//ͳ�Ƶ�ǰϵͳ��Ա����Ŀ
	for (int i = 0; i < 1000; i++) {
		if (staff[i] == NULL) {
			count = i;
			break;
		}
		if (i == 999 && staff[999] != NULL) {
			count = 1000;
			break;
		}
	}
	if (count == 0) {
		cout << "ְ����ϢΪ�գ�����ʧ�ܣ�" << endl;
	}
	else {
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1����ְ����Ų���" << endl;
		cout << "2����ְ��������" << endl;
		cin >> searchNum;
		switch (searchNum) {
		case 1: {
			cout << "������Ҫ���ҵ�ְ����ţ�" << endl;
			cin >> searchStaffId;
			for (int i = 0; i < count; i++) {
				if (staff[i]->m_StaffId == searchStaffId) {
					cout << "���ҳɹ�����Ա����Ϣ���£�" << endl;
					staff[i]->show();
					break;
				}
				else {
					unEqualNum++;
				}
			}
			if (unEqualNum == count) {
				cout << "����ʧ�ܣ����޴���" << endl;
			}
			break;
		}
		case 2: {
			cout << "������Ҫ���ҵ�ְ��������" << endl;
			cin >> searchStaffName;
			for (int i = 0; i < count; i++) {
				if (staff[i]->m_Name == searchStaffName) {
					cout << "���ҳɹ�����Ա����Ϣ���£�" << endl;
					staff[i]->show();
					break;
				}
				else {
					unEqualNum++;
				}
			}
			if (unEqualNum == count) {
				cout << "����ʧ�ܣ����޴���" << endl;
			}
			break;
		}
		default: {
			cout << "������������1-2��ѡ��" << endl;
			break;
		}
		}
	}
}

//���ձ��������
void orderById(Staff *staff[]) {
	int count;
	int orderStaffId;
	
	//ͳ�Ƶ�ǰϵͳ��Ա����Ŀ
	for (int i = 0; i < 1000; i++) {
		if (staff[i] == NULL) {
			count = i;
			break;
		}
		if (i == 999 && staff[999] != NULL) {
			count = 1000;
			break;
		}
	}
	if (count==0) {
		cout<<"ְ����ϢΪ�գ�����ʧ�ܣ�"<<endl;
	}
	else {
		cout << "��ѡ������ʽ��" << endl;
		cout << "1����ְ���Ž�������" << endl;
		cout << "2����ְ���Ž��н���" << endl;
		cin >> orderStaffId;
		switch (orderStaffId) {
		case 1: {
			//ð����������
			for (int i = 0; i < count; i++) {
				for (int j = 0; j < count - i - 1; j++) {
					if (staff[j]->m_StaffId > staff[j + 1]->m_StaffId) {
						Staff *temp = staff[j + 1];
						staff[j + 1] = staff[j];
						staff[j] = temp;
					}
				}
			}
			cout << "����ɹ��������Ľ��Ϊ��" << endl;
			printStaffInfo(staff);
			writeIntoFile(staff, 0);
			break;
		}
		case 2: {
			//ð�ݽ�������
			for (int i = 0; i < count; i++) {
				for (int j = 0; j < count - i - 1; j++) {
					if (staff[j]->m_StaffId < staff[j + 1]->m_StaffId) {
						Staff *temp = staff[j + 1];
						staff[j + 1] = staff[j];
						staff[j] = temp;
					}
				}
			}
			cout << "����ɹ��������Ľ��Ϊ��" << endl;
			printStaffInfo(staff);
			writeIntoFile(staff, 0);
			break;
		}
		default: {
			cout << "������������1-2��ѡ��" << endl;
			break;
		}
		}
	}
	
	
}

//��������ĵ�����
void clearAll(Staff *staff[]) {
	int clearChoice;
	int i = 0;
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;
	cin >> clearChoice;
	switch (clearChoice) {
	case 1: {
		while (staff[i]!=NULL&&i<1000) {
			delete staff[i];
			staff[i] = NULL;
			i++;
		}
		writeIntoFile(staff, 0);
		cout<<"��ճɹ���"<<endl;
	}
	case 2: {
		break;
	}
	default: {
		cout << "������������1-2��ѡ��" << endl;
		break;
	}
	}
	
}

//�˵�����
void menu() {
	cout << "*******************************************" << endl;
	cout << "***********��ӭʹ��ְ������ϵͳ��**********" << endl;
	cout << "**************1.����ְ����Ϣ***************" << endl;
	cout << "**************2.��ʾְ����Ϣ***************" << endl;
	cout << "**************3.ɾ����ְְ��***************" << endl;
	cout << "**************4.�޸�ְ����Ϣ***************" << endl;
	cout << "**************5.����ְ����Ϣ***************" << endl;
	cout << "**************6.���ձ������***************" << endl;
	cout << "**************7.��������ĵ�***************" << endl;
	cout << "**************0.�˳�����ϵͳ***************" << endl;
	cout << "*******************************************" << endl;
}

int main78() {
	int mainNum = 78;
	bool FLAG = true;
	Staff* staff[1000];
	for (int i = 0; i < sizeof(staff) / sizeof(staff[0]); i++) {
		staff[i] = NULL;
	}
	
	while (FLAG) {
		system("cls");//ÿ����ʾ�˵�ǰ��������
		menu();
		int choice;
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice) {
		case 1: {
			insertStaffInfo(staff);
			break;
		}
		case 2: {
			printStaffInfo(staff);
			break;
		}
		case 3: {
			deleteStaff(staff);
			break;
		}
		case 4: {
			updateStaffInfo(staff);
			break;
		}
		case 5: {
			searchStaffInfo(staff);
			break;
		}
		case 6: {
			orderById(staff);
			break;
		}
		case 7: {
			clearAll(staff);
			break;
		}
		default:
			FLAG = false;
			break;
		}
		system("pause");

	}
	
	return 0;
}