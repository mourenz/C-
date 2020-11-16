#include<stdio.h>
#include<iostream>
using namespace std;

void copyStr(char* str1, char* str2){
	while (*str1)
	{
		str1++; //最后一次结束时 str指针的位置指向 字符结束的 0
	}
	while (*str2)
	{
		*str1 = *str2;  //第一次 覆盖str1为0的位置的字符
		str1++;
		str2++;
	}
}


int main(){

	//指针数组
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[] = { &a, &b, &c }; // 这是一个存放指向存放int类型数据变量的内存地址的数组

	cout << "int* arr长度" << sizeof(arr) << endl; // 3*4 =12
	cout << "*arr[0]长度" << sizeof(*arr[0]) << endl; // sizeof(int) =4

	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
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

	int d = 20;
	int* p1 = &d;
	int** p2 = &p1;
	cout << **p2 << endl;


	//二级指针 存放的是一级指针的地址
	cout << "二级指针遍历" << endl;
	int** p = arr2;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			//cout << p[i][j]<<",";
			//cout << *(p[i] + j) << ",";
			cout << *(*(p + i) + j) << ",";
		}
		cout << endl;
	}

	cout << "字符串拷贝" << endl;
	char ch1[100] = "hello";
	char ch2[50] = "world";
	copyStr(ch1, ch2);
	for (int i = 0; i < 100; i++){
		if (*(ch1+i))cout << *(ch1 + i) << ",";
	}
	


	






	getchar();



}