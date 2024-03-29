//自己的通用的数组类
#pragma once 
#include <iostream>
using namespace std;

template<class t>
class myArray {
private:
	t* padDress;  //指针指向堆区开辟的真实数组
	int m_Capacity; //数组容量
	int m_Size; //数组大小
public:
	//有参构造  参数 容量
	myArray(int capacity) {
		//cout << "myArray有参构造调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->padDress = new t[this->m_Capacity];
	};
	//拷贝构造
	myArray(const myArray &arr) {
		//cout << "myArray拷贝构造调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->padDress = arr.padDress;
		//深拷贝
		this->padDress = new t[arr.m_Capacity];

		//将arr中的数据都拷贝过来
		for (int i = 0; i < this->m_Size; i++) {
			this->padDress[i] = arr.padDress[i];
		};
	};

	//operator= 防止浅拷贝问题   
	myArray &operator=(const myArray&arr) {
		//cout << "myArray  的 operator=调用" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (this->padDress != NULL) {
			delete[] this->padDress;
			this->padDress = NULL;
		};
		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->padDress = new t[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->padDress[i] = arr.padDress[i];
		};
		return *this;
	};

	//尾插法
	void push_Back(const t &val) {
		//判断容量是否等于大小
		if (this->m_Capacity == this->m_Size) {
			return;
		};
		this->padDress[this->m_Size] = val; //在数组末尾插入数据
		this->m_Size++; //更新数组大小
	};

	//尾删法
	void pop_Back() {
		//让用户访问不到最后一个元素，即为尾删，逻辑删除
		if (this->m_Size == 0) {
			return;
		};
		this->m_Size--;
	};

	//通过下标方式访问数组中的元素  arr[0] = 100
	t &operator[](int index) {
		return this->padDress[index];
	};

	//返回数组容量
	int getCapacity() {
		return this->m_Capacity;
	};

	//返回数组大小
	int getSize() {
		return this->m_Size;
	};

	//析构函数
	~myArray() {
		if (this->padDress != NULL){
			//cout << "myArray析构函数调用" << endl;
			delete[] this->padDress;
			this->padDress = NULL;
		};
	};
};