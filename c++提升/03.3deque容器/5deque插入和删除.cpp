﻿#include<iostream>
using namespace std;

//*向deque容器中插入和删除数据

//函数原型：
//两端插入操作：
//push_back(elem);           //在容器尾部添加一个数据
//push_front(elem);          //在容器头部插入一个数据
//pop_back();                //删除容器最后一个数据
//pop_front();               //删除容器第一个数据

//指定位置操作：
//insert(pos, elem);         //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
//insert(pos, n, elem);      //在pos位置插入n个elem数据，无返回值。
//insert(pos, beg, end);     //在pos位置插入[beg,end)区间的数据，无返回值。
//clear();                   //清空容器的所有数据
//erase(beg, end);           //删除[beg,end)区间的数据，返回下一个数据的位置。
//erase(pos);                //删除pos位置的数据，返回下一个数据的位置。


#include <deque>

void printDeque5(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	};
	cout << endl;
};
//两端操作
void test51() {
	deque<int> d;
	//尾插
	d.push_back(10);
	d.push_back(20);
	//头插
	d.push_front(100);
	d.push_front(200);

	printDeque5(d);

	//尾删
	d.pop_back();
	//头删
	d.pop_front();
	printDeque5(d);
};

//插入
void test52() {
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque5(d);

	d.insert(d.begin(), 1000);
	printDeque5(d);

	d.insert(d.begin(), 2, 10000);
	printDeque5(d);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque5(d);
};

//删除
void test53() {
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque5(d);

	deque<int>::iterator it = d.begin();


	d.erase(it);
	printDeque5(d);

	d.erase(d.begin(), d.end());//删除
	printDeque5(d);
	d.clear();
	printDeque5(d);
};

int main5() {
	test51();
	test52();
	test53();
	system("pause");
	return 0;
};

//总结：
//插入和删除提供的位置是迭代器！
//尾插-- - push_back
//尾删-- - pop_back
//头插-- - push_front
//头删-- - pop_front