#include<iostream>
#include<string>
#include<time.h>
using namespace std;
//ÀàÄ£°å£º
template<class NameType,class AgeType>
class Person002{
public:
	Person002(NameType name,AgeType age) {
		this->name = name;
		this->age = age;
	}
public:
	NameType name;
	AgeType age;
};

int main85() {
	int mainNum = 85;
	int a = 10;
	int b = 20;
	char c1 = 'a';
	char c2 = 'a';
	Person002<string, int> p1("Ñ°Îò¿Õ", 55);


	return 0;
}