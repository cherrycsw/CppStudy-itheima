#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
//链表基本概念 特点：由节点对象构成，每个节点对象包括一个数据域和一个指向下一个节点的指针域
//STL中的list是一个双向循环列表
//优点：增删速度快，采用动态存储分配，不会造成浪费和益处（相比vector）
//缺点：空间占用率是普通数组的两倍，遍历效率低，不支持数据随机存取it+3
//list有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector中是不成立的，因为vector的容量到达上限后都会重新开辟内存，并用新的迭代器指向要操作的数据

void printList(const list<int> l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end();it++) {
		cout << (*it) << endl;
	}
	cout << endl;
}

int main121() {
	int mainNum = 121;
	list<int> L1;//默认构造
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);
	printList(L1);

	list<int> L2(L1);//拷贝构造
	printList(L2);

	return 0;
}