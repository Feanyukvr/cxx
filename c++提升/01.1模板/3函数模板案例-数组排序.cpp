#include<iostream>
using namespace std;

//实现通用 对数组进行排序的函数   
//规则 从大到小
//算法 选择 
//测试 char 数组、 int数组

//交换函数模板
template<class T>
void mySwap3(T&a, T&b){
	T temp = a;
	a = b;
	b = temp;
}

//排序算法
template<class T>
void mySort3( T arr[] , int len){
	for (int i = 0; i < len; i++){
		int max = i; // 认定最大值的下标
		for (int j = i + 1; j < len; j++){
			//认定的最大值 比 遍历出的数值 要下，说明 j下标的元素才是真正的最大值
			if (arr[max] > arr[j]){
				max = j;//更新最大值下标
			}
		}
		if (max != i){
			//交换max和i元素
			mySwap3(arr[max], arr[i]);
		}
	}
}

//提供打印数组模板
template<class T>
void printArray3(T arr[], int len){
	for (int i = 0; i < len; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test04(){
	//测试char数组
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort3(charArr, num);
	printArray3(charArr, num);
}

void test05(){
	//测试int数组
	int intArr[] = { 7,5,1,3,9,2,4,6,8 };
	int num = sizeof(intArr) / sizeof(int);
	mySort3(intArr, num);
	printArray3(intArr, num);
}

int main03() {
	test04();
	test05();
	system("pause");

	return 0;
}