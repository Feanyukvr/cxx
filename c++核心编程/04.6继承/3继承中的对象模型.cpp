﻿#include<iostream>
using namespace std;
//问题： 从父类继承过来的成员，哪些属于子类对象中？
/*
class Base{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //私有成员只是被隐藏了，但是还是会继承下去
};

//公共继承
class Son :public Base{
public:
	int m_D;
};

void test01(){
	cout << "sizeof Son = " << sizeof(Base) << endl;
	cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}
*/
//cd(进入) dir(查看)
//cl /d1 reportSingleClassLayoutSon "3继承中的对象模型.cpp"
//结论： 父类中私有成员也是被子类继承下去了，只是由编译器给隐藏后访问不到