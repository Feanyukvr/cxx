#include<iostream>
using namespace std;
#include <string>

//模板局限性
//模板并不是万能的，有些特定数据类型，需要用具体化方式做特殊实现

class Person6{
public:
	string m_Name;
	int m_Age;
	Person6(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	};
};

//对比两个数据是否相等函数
template<class T>
bool myCompare6(T& a, T& b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	};
};

void test08() {
	int a = 10;
	int b = 20;
	bool ret = myCompare6(a, b);
	if (ret) {
		cout << "a == b" << endl;
	}
	else {
		cout << "a != b" << endl;
	};
};

//利用具体化Person的版本实现代码，具体化优先调用
template<> bool myCompare6(Person6 & p1, Person6 & p2) {
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age) {
		return true;
	}
	else {
		return false;
	};
};

void test09() {
	Person6 p1("Tom", 10);
	Person6 p2("Tom", 11);
	bool ret = myCompare6(p1, p2);
	if (ret) {
		cout << "p1 == p2" << endl;
	}
	else {
		cout << "p1 != p2" << endl;
	};
};

int main(){
	test08();
	test09();
	system("pause");
	return 0;
}