#include<iostream>
using namespace std;
//继承是面向对象三大特性之一
//例如我们看到很多网站中，都有公共的头部，公共的底部，甚至公共的左侧列表，只有中心内容不同
//接下来我们分别利用普通写法和继承的写法来实现网页中的内容，看一下继承存在的意义以及好处
/*
//Java页面
class Java{
public:
	void header(){
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer(){
		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
	}
	void left(){
		cout << "Java,Python,C++...(公共分类列表)" << endl;
	}
	void content(){
		cout << "JAVA学科视频" << endl;
	}
};
//Python页面
class Python{
public:
	void header(){
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer(){
		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
	}
	void left(){
		cout << "Java,Python,C++...(公共分类列表)" << endl;
	}
	void content(){
		cout << "Python学科视频" << endl;
	}
};
//C++页面
class CPP{
public:
	void header(){
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer(){
		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
	}
	void left(){
		cout << "Java,Python,C++...(公共分类列表)" << endl;
	}
	void content(){
		cout << "C++学科视频" << endl;
	}
};

void test01(){
	//Java页面
	cout << "Java下载视频页面如下： " << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------" << endl;
	//Python页面
	cout << "Python下载视频页面如下： " << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------" << endl;
	//C++页面
	cout << "C++下载视频页面如下： " << endl;
	CPP cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();
}


//继承实现：
//公共页面
class BasePage{
public:
	void header(){
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer(){
		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
	}
	void left(){
		cout << "Java,Python,C++...(公共分类列表)" << endl;
	}
};
//Java页面
class Java1 : public BasePage{//继承方式：公共继承
public:
	void content(){
		cout << "JAVA学科视频" << endl;
	}
};
//Python页面
class Python1 : public BasePage{
public:
	void content(){
		cout << "Python学科视频" << endl;
	}
};
//C++页面
class CPP1 : public BasePage{
public:
	void content(){
		cout << "C++学科视频" << endl;
	}
};

void test02(){
	//Java页面
	cout << "Java下载视频页面如下： " << endl;
	Java1 ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------" << endl;

	//Python页面
	cout << "Python下载视频页面如下： " << endl;
	Python1 py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------" << endl;

	//C++页面
	cout << "C++下载视频页面如下： " << endl;
	CPP1 cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();


}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
*/

//总结
//继承的好处： == 可以减少重复的代码 ==
//class A : public B;
//class 子类：继承方式 父类
//A 类称为子类 或 派生类
//B 类称为父类 或 基类
//派生类中的成员，包含两大部分
//一类是从基类继承过来的，一类是自己增加的成员。
//从基类继承过过来的表现其共性，而新增的成员体现了其个性。