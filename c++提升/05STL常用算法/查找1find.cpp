#include<iostream>
using namespace std;

//算法简介：
//find                    //查找元素
//find_if                 //按条件查找元素
//adjacent_find           //查找相邻重复元素
//binary_search           //二分查找法
//count                   //统计元素个数
//count_if                //按条件统计元素个数

//查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
//函数原型：
//find(iterator beg, iterator end, value);  

// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// value 查找的元素

#include <algorithm>
#include <vector>
void test11() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i + 1);
	};
	//查找容器中是否有 5 这个元素
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end()) {
		cout << "没有找到!" << endl;
	}
	else {
		cout << "找到:" << *it << endl;
	};
};

class Person1 {
public:
	string m_Name;
	int m_Age;
public:
	Person1(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	};
	//重载==
	bool operator==(const Person1& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		};
		return false;
	};
};

void test12() {
	vector<Person1> v;

	//创建数据
	Person1 p1("aaa", 10);
	Person1 p2("bbb", 20);
	Person1 p3("ccc", 30);
	Person1 p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person1>::iterator it = find(v.begin(), v.end(), p2);
	if (it == v.end()){
		cout<<"没有找到!"<<endl;
	}
	else {
		cout<<"找到姓名:"<<it->m_Name<<" 年龄:"<<it->m_Age<<endl;
	};
};
int main1() {
	test11();
	test12();
	system("pause");
	return 0;
}
//总结： 利用find可以在容器中找指定的元素，返回值是** 迭代器**