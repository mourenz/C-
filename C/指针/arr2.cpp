#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

	//指针数组
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[] = { &a, &b, &c }; // 这是一个存放指向存放int类型数据变量的内存地址的数组

	cout << "int* arr长度" << sizeof(arr) << endl; // 3*4 =12
	cout << "*arr[0]长度" << sizeof(*arr[0]) << endl; // sizeof(int) =4

	for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout << *arr[i] << endl;
	}


	cout << "二维指针数组" << endl;
	int a1[] = { 1, 2, 3 };
	int a2[] = { 4, 5, 6 };
	int a3[] = { 7, 8, 9 };

	int* arr2[] = { a1, a2, a3 };

	cout << arr2 << endl;
	cout << &arr2[0] << endl; //前两者 一样 但 绝对不是 arr2 != a1;
	cout << a1 << endl;
	cout << arr2[0] << endl;//  a1 == arr2[0] 正确








	getchar();



}