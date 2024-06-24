#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<time.h>
using namespace std;
//STL案例—评委打分
//案例描述：有5名选手：ABCDE，10个评委分别对每一名选手打分，去除评委中最高分和最低分，取平均分

//实现步骤：
//1、创建5名选手，放到vector中
//2、遍历vector容器，取出每一个选手，执行for循环，可以把10个评分打分存到deque容器中
//3、sort算法对deque容器中分数排序，去除最高和最低分
//4、deque容器遍历一遍，累加总分
//5、获取平均分

//定义参赛选手类
class Competitor {
private:
	string name;
	double score;//平均分
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

void createCompetitor(vector<Competitor> &v) {//创建5名选手并存放到容器函数
	for (int i = 0; i < 5;i++) {
		string nameSeed = "ABCDE";
		string nameHead = "选手";
		string name = nameHead + nameSeed[i];
		cout << name << endl;
		int score = 0;
		Competitor comp(name, score);
		v.push_back(comp);
	}
}

void mark(vector<Competitor> &v) {//打分函数
	srand((unsigned int)time(NULL)); //添加随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样
	for (int i = 0; i < v.size(); i++) {
		deque<int> d;
		cout << "评委对" << v[i].getName() << "开始打分：" << endl;
		for (int j = 0; j < 10; j++) {
			int score= rand() % 41 + 60;//系统生成一个60~100的随机整数
			d.push_back(score);
			cout << "评委"<<j+1<<"打分完毕！" << endl;
		}
		cout << "评委对" << v[i].getName() << "打分完毕！" << endl;
		cout << "打分详情：" << endl;
		for (deque<int>::iterator it = d.begin(); it != d.end();it++) {
			cout << *it << " ";
		}
		cout << endl;
		cout << "打分排序中。。。" << endl;
		sort(d.begin(),d.end());//对10个分数排序
		cout << "排序后打分详情：" << endl;
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
		d.pop_front();//去掉一个最高分
		d.pop_back();//去掉一个最低分
		cout << "去掉最高分和最低分后分数详情：" << endl;
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
		double sumScore=0;
		for (int k = 0; k < d.size();k++) {
			sumScore += d[k];
		}
		cout << v[i].getName()<<"最后平均分为："<< sumScore/8 << endl;
		v[i].setScore(sumScore/8);//获取平均分并存储到容器对象中

	}

}


int main118() {
	int mainNum = 118;
	vector<Competitor> v;//创建存放5名选手的vector容器
	createCompetitor(v);//创建5名选手并存放到容器函数
	mark(v);//开始打分

	return 0;
}