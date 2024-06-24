#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
#include<time.h>
using namespace std;
//STL案例2：员工分组
//案例描述：公司今天招聘了10个员工(ABCDEFGH)，10名员工进入公司后，需要指派员工在哪个部门工作
//员工信息有：姓名、工资组成；部门分为策划、美术、研发
//随机给10名员工分配部门和工资
//通过multimap进行信息的插入 key(部门编号)，value(员工)
//分部门显示员工信息

//实现步骤：
//1、创建10名员工，放到vector中
//2、遍历vector容器，取出每个员工，进行随机分组
//3、分组后，将员工部门编号作为key，具体员工工作为value,放到multimap容器中
//4、分部门显示员工信息
class Employee2{
public:
	string name;
	int salary;

};

void createEmp(vector<Employee2> &v) {
	srand((unsigned int)time(NULL)); //添加随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样
	for (int i = 0; i < 10; i++) {
		Employee2 e;
		string nameSeed = "ABCDEFGHIJ";
		string nameHead = "员工";
		string name = nameHead + nameSeed[i];
		int salary = rand() % 10001 + 10000;//系统生成一个10000~20000的随机整数
		e.name = name;
		e.salary = salary;
		v.push_back(e);
	}
}
void group(vector<Employee2> &v, multimap<int, Employee2> &m) {//分组函数
	srand((unsigned int)time(NULL)); //添加随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样
	for (int i = 0; i < v.size();i++) {
		int deptId = rand() % 3 ;//系统生成一个0~2的随机整数
		m.insert(make_pair(deptId, v[i]));
	}
 }
void printMapE(multimap<int, Employee2> &m) {
	cout << "策划部门：" << endl;
	multimap<int, Employee2>::iterator pos = m.find(0);
	int count = m.count(0);
	int index = 0;
	for (; pos !=m.end()&&index<count ;pos++,index++) {
		cout << "[" << "部门编号：" << (*pos).first << "," << "(" << "员工姓名：" << (*pos).second.name << "," << "工资：" << (*pos).second.salary << ")" << "]" << endl;
	}

	cout << "美术部门：" << endl;
	pos = m.find(1);
	count = m.count(1);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "[" << "部门编号：" << (*pos).first << "," << "(" << "员工姓名：" << (*pos).second.name << "," << "工资：" << (*pos).second.salary << ")" << "]" << endl;
	}

	cout << "研发部门：" << endl;
	pos = m.find(2);
	count = m.count(2);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "[" << "部门编号：" << (*pos).first << "," << "(" << "员工姓名：" << (*pos).second.name << "," << "工资：" << (*pos).second.salary << ")" << "]" << endl;
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