#include<iostream>
using namespace std;

//算法简介：
//copy                      // 容器内指定范围的元素拷贝到另一容器中
//replace                   // 将容器内指定范围的旧元素修改为新元素
//replace_if                // 容器内指定范围满足条件的元素替换为新元素
//swap                      // 互换两个容器的元素

//功能描述：
//容器内指定范围的元素拷贝到另一容器中

//函数原型：
//copy(iterator beg, iterator end, iterator dest);  
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg  开始迭代器
// end  结束迭代器
// dest 目标起始迭代器

#include <algorithm>
#include <vector>

class myPrint1{
public:
	void operator()(int val) {
		cout << val << " ";
	};
};

void test1() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i + 1);
	};
	vector<int> v2;
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());

	for_each(v2.begin(), v2.end(), myPrint1());
	cout << endl;
};

int main1() {
	test1();
	system("pause");
	return 0;
}

//总结：利用copy算法在拷贝时，目标容器记得提前开辟空间