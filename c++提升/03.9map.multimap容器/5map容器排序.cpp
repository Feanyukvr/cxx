#include<iostream>
using namespace std;
//map容器排序
//map容器默认排序规则为 按照key值进行 从小到大排序，掌握如何改变排序规则
//主要技术点:
//利用仿函数，可以改变排序规则

#include <map>

class MyCompare5 {
public:
	bool operator()(int v1, int v2)const {
		return v1 > v2;
	};
};

void test5(){
	//默认从小到大排序
	//利用仿函数实现从大到小排序
	map<int, int, MyCompare5> m;

	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));

	for (map<int, int, MyCompare5>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key:" << it->first << " value:" << it->second << endl;
	};
};
int main() {
	test5();
	system("pause");
	return 0;
};

//总结：
//利用仿函数可以指定map容器的排序规则
//对于自定义数据类型，map必须要指定排序规则, 同set容器