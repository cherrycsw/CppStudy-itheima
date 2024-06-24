#include<iostream>
#include<string>
#include<fstream>
#include<queue>
using namespace std;

//职工管理系统介绍：
//职工管理系统可以用来管理公司内所有员工信息，本教程主要利用C++来实现一个基于多态的职工管理系统

//职工管理系统成员介绍：
//公司中职工分为三类：普通员工、经理、老板，显示信息时需要显示职工编号、职工姓名、职工岗位、以及职责
//普通员工：完成经理交给的任务
//经理职责：完成老板给的任务，并下发给员工
//老板职责：管理公司所有事物

//管理系统中需要实现的功能如下：
//退出管理程序：退出当前管理系统
//增加职工信息：实现批量添加职工功能，将信息录入到文件中，职工信息为：职工编号、姓名、部门编号
//显示职工信息：显示公司内所有职工信息
//删除离职职工：按照编号删除指定的职工
//修改职工信息：按照编号修改职工个人信息
//查找职工信息：按照职工的编号或者职工的姓名进行相关人员信息的查找
//按照编号排序：按照职工编号，进行排序，排序规则由用户指定
//清空所有文档：清空文件中记录的所有职工信息（清空前需再次确认，防止误删）

//职工类
class Staff {
public:
	virtual void show() = 0;
public:
	int m_StaffId;//职工编号
	string m_Name;//职工姓名
	int m_DepartmentId;//职工部门编号
	string m_Post;//职工岗位
	string m_Responsibility;//职工职责
};

//员工类
class CommonStaff:public Staff {
public:
	CommonStaff(int staffId,string name) {
		this->m_StaffId = staffId;
		this->m_Name = name;
		this->m_DepartmentId = 1;
		this->m_Post = "员工";
		this->m_Responsibility = "完成经理交给的任务";
	}
	virtual void show() {
		cout << "职工编号：" << this->m_StaffId << "\t职工姓名：" << this->m_Name << "\t岗位：" << this->m_Post << "\t岗位职责：" << this->m_Responsibility << endl;
	}
};

//经理类
class Manager :public Staff {
public:
	Manager(int staffId, string name) {
		this->m_StaffId = staffId;
		this->m_Name = name;
		this->m_DepartmentId = 2;
		this->m_Post = "经理";
		this->m_Responsibility = "完成老板给的任务，并下发给员工";
	}
	virtual void show() {
		cout << "职工编号：" << this->m_StaffId << "\t职工姓名：" << this->m_Name << "\t岗位：" << this->m_Post << "\t岗位职责：" << this->m_Responsibility << endl;
	}
};

//总裁类
class President :public Staff {
public:
	President(int staffId, string name) {
		this->m_StaffId = staffId;
		this->m_Name = name;
		this->m_DepartmentId = 3;
		this->m_Post = "总裁";
		this->m_Responsibility = "管理公司所有事物";
	}
	virtual void show() {
		cout << "职工编号：" << this->m_StaffId << "\t职工姓名：" << this->m_Name << "\t岗位：" << this->m_Post << "\t岗位职责：" << this->m_Responsibility << endl;
	}
};

//写文件操作函数
void writeIntoFile(Staff* staff[],int num) {
	ofstream ofs;
	ofs.open("empFile.txt", ios::out);//文件尾部写入文本文件
	while (staff[num] != NULL) {
		ofs << staff[num]->m_StaffId << " ";
		ofs << staff[num]->m_Name << " ";
		ofs << staff[num]->m_DepartmentId << endl;
		num++;
	}
	ofs.close();
}

//增加职工信息函数
void insertStaffInfo(Staff* staff[]) {
	int insertNum;
	int newStaffId;
	string newStaffName;
	int newStaffPost;
	int count = 0;
	
	cout << "请输入增加职工数量：" << endl;
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
			cout << "请输入第" << i-count+1 << "个新职工编号：" << endl;
			cin >> newStaffId;
			cout << "请输入第" << i-count+1 << "个新职工姓名：" << endl;
			cin >> newStaffName;
			cout << "请选择该职工的岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、总裁" << endl;
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
				cout << "你输入的字符有误，请在1-3中选择！" << endl;
				break;
			}

			}
		}
		
		writeIntoFile(staff, 0);
		cout << "成功添加" <<insertNum<<"名新职工！"<< endl;
	}
	else {
		cout << "你要添加的人数大于系统上限，请重新输入或删除职工信息后添加！" << endl;
	}
	
}

//显示职工信息函数
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
		cout << "职工信息为空！请添加！" << endl;
	}
	else {
		for (int i = 0; i < count;i++) {
			staff[i]->show();
		}
	}
}

//删除离职职工函数
void deleteStaff(Staff *staff[]) {
	int deleteStaffId;
	int count1 = 0;
	queue<int> myQueue;
	int myQueueSize;
	//统计当前系统中员工数目
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
		cout << "职工信息为空！删除失败！" << endl;
	}
	else {
		cout << "请输入想要删除的职工号：" << endl;
		cin >> deleteStaffId;
		//统计staff中m_StaffId == deleteStaffId的个数，并获取每个staff的数组指针索引，压入到队列中
		for (int i = 0; i < count1;i++) {
			if (staff[i]->m_StaffId == deleteStaffId) {
				myQueue.push(i);
			}
		}
		myQueueSize = myQueue.size();
		if (myQueueSize == 0) {
			cout << "删除失败！系统中没有所选id" << endl;
		}
		else {
			//删除m_StaffId == deleteStaffId的员工对象
			for (int i = 0; i < myQueueSize; i++) {
				delete staff[myQueue.front() - i];

				//将删除对象后面的对象向前移动
				for (int j = myQueue.front(); j < count1 - 1; j++) {
					staff[j] = staff[j + 1];
				}

				//将最后一个元素置空
				staff[count1 - 1] = NULL;

				count1--;//删除一个对象后，对象数减一
				myQueue.pop();//删除完后弹出已删除的索引
			}
			cout << "删除成功！" << endl;
			
		}
			
	}
	writeIntoFile(staff, 0);
	
}

//修改职工信息函数
void updateStaffInfo(Staff *staff[]) {
	int updStaffId;
	int newUpdStaffId;
	string newUpdName;
	int newUpdPost;
	int num = 0;
	int count;
	int index=0;
	//统计当前系统中员工数目
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
		cout << "职工信息为空！修改失败！" << endl;
	}
	else {
		//开始修改
		cout << "请输入修改职工的编号：" << endl;
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
			cout << "未查到该职工，请重新输入！" << endl;
			goto FLAGG;
		}
		else {
			cout << "查到：" << staff[index]->m_StaffId << "号员工，请输入新职工号：" << endl;
			cin >> newUpdStaffId;
			cout << "请输入新姓名：" << endl;
			cin >> newUpdName;
			cout << "请输入新岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、总裁" << endl;
			cin >> newUpdPost;
			delete staff[index];
			staff[index] = NULL;
			switch (newUpdPost) {
			case 1: {
				staff[index] = new CommonStaff(newUpdStaffId, newUpdName);
				cout << "修改成功！" << endl;
				break;
			}
			case 2: {
				staff[index] = new Manager(newUpdStaffId, newUpdName);
				cout << "修改成功！" << endl;
				break;
			}
			case 3: {
				staff[index] = new President(newUpdStaffId, newUpdName);
				cout << "修改成功！" << endl;
				break;
			}
			default: {
				cout << "你输入的字符有误，请在1-3中选择！" << endl;
				break;
			}

			}
		}

	}
	
}

//查找职工信息函数
void searchStaffInfo(Staff *staff[]) {
	int count;
	int searchNum;
	int searchStaffId;
	string searchStaffName;
	int unEqualNum=0;
	//统计当前系统中员工数目
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
		cout << "职工信息为空，排序失败！" << endl;
	}
	else {
		cout << "请输入查找的方式：" << endl;
		cout << "1、按职工编号查找" << endl;
		cout << "2、按职姓名查找" << endl;
		cin >> searchNum;
		switch (searchNum) {
		case 1: {
			cout << "请输入要查找的职工编号：" << endl;
			cin >> searchStaffId;
			for (int i = 0; i < count; i++) {
				if (staff[i]->m_StaffId == searchStaffId) {
					cout << "查找成功！该员工信息如下：" << endl;
					staff[i]->show();
					break;
				}
				else {
					unEqualNum++;
				}
			}
			if (unEqualNum == count) {
				cout << "查找失败！查无此人" << endl;
			}
			break;
		}
		case 2: {
			cout << "请输入要查找的职工姓名：" << endl;
			cin >> searchStaffName;
			for (int i = 0; i < count; i++) {
				if (staff[i]->m_Name == searchStaffName) {
					cout << "查找成功！该员工信息如下：" << endl;
					staff[i]->show();
					break;
				}
				else {
					unEqualNum++;
				}
			}
			if (unEqualNum == count) {
				cout << "查找失败！查无此人" << endl;
			}
			break;
		}
		default: {
			cout << "输入有误！请在1-2中选择" << endl;
			break;
		}
		}
	}
}

//按照编号排序函数
void orderById(Staff *staff[]) {
	int count;
	int orderStaffId;
	
	//统计当前系统中员工数目
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
		cout<<"职工信息为空，排序失败！"<<endl;
	}
	else {
		cout << "请选择排序方式：" << endl;
		cout << "1、按职工号进行升序" << endl;
		cout << "2、按职工号进行降序" << endl;
		cin >> orderStaffId;
		switch (orderStaffId) {
		case 1: {
			//冒泡升序排序
			for (int i = 0; i < count; i++) {
				for (int j = 0; j < count - i - 1; j++) {
					if (staff[j]->m_StaffId > staff[j + 1]->m_StaffId) {
						Staff *temp = staff[j + 1];
						staff[j + 1] = staff[j];
						staff[j] = temp;
					}
				}
			}
			cout << "排序成功！排序后的结果为：" << endl;
			printStaffInfo(staff);
			writeIntoFile(staff, 0);
			break;
		}
		case 2: {
			//冒泡降序排序
			for (int i = 0; i < count; i++) {
				for (int j = 0; j < count - i - 1; j++) {
					if (staff[j]->m_StaffId < staff[j + 1]->m_StaffId) {
						Staff *temp = staff[j + 1];
						staff[j + 1] = staff[j];
						staff[j] = temp;
					}
				}
			}
			cout << "排序成功！排序后的结果为：" << endl;
			printStaffInfo(staff);
			writeIntoFile(staff, 0);
			break;
		}
		default: {
			cout << "输入有误！请在1-2中选择" << endl;
			break;
		}
		}
	}
	
	
}

//清空所有文档函数
void clearAll(Staff *staff[]) {
	int clearChoice;
	int i = 0;
	cout << "确认清空？" << endl;
	cout << "1、确认" << endl;
	cout << "2、返回" << endl;
	cin >> clearChoice;
	switch (clearChoice) {
	case 1: {
		while (staff[i]!=NULL&&i<1000) {
			delete staff[i];
			staff[i] = NULL;
			i++;
		}
		writeIntoFile(staff, 0);
		cout<<"清空成功！"<<endl;
	}
	case 2: {
		break;
	}
	default: {
		cout << "输入有误！请在1-2中选择" << endl;
		break;
	}
	}
	
}

//菜单函数
void menu() {
	cout << "*******************************************" << endl;
	cout << "***********欢迎使用职工管理系统！**********" << endl;
	cout << "**************1.增加职工信息***************" << endl;
	cout << "**************2.显示职工信息***************" << endl;
	cout << "**************3.删除离职职工***************" << endl;
	cout << "**************4.修改职工信息***************" << endl;
	cout << "**************5.查找职工信息***************" << endl;
	cout << "**************6.按照编号排序***************" << endl;
	cout << "**************7.清空所有文档***************" << endl;
	cout << "**************0.退出管理系统***************" << endl;
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
		system("cls");//每次显示菜单前进行清屏
		menu();
		int choice;
		cout << "请输入您的选择：" << endl;
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