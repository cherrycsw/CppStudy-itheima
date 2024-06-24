#include<iostream>
#include<string>
using namespace std;

int main5() {
	
	int score;
	cout <<"请输入你的分数:" << endl;
	cin >> score;
	cout << "您输入的分数为:"<<score << endl;

	if (score>600) {
		cout << "恭喜您考入一本大学！" << endl;
	}
	else if(score>500){
		cout << "恭喜您考入二本大学！" << endl;
	}
	else if (score > 400) {
		cout << "恭喜您考入三本大学！" << endl;
	}
	else {
		cout << "很遗憾您未能考上本科，继续努力！" << endl;
	}
	

	return 0;
}