#include<stdio.h>
#include<iostream>
using namespace std;

int copyStringOfArray(char*, char*);
int copyStringOfP(char* dest, char* origin);

int main02(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;

	cout << *(p + 1) << endl; //2

	p++; //指针＋1 *sizeof(所指向的数据类型);
	int step = p - arr; // 1  根据指针的偏移量 /sizeof(所指向的数据类型)
	cout << step << endl;

	/**
	注意函数的形式参数为 数组时 数组会自动退化为指针 造成数据长度丢失 ，不管是指针还是数组 必须制定数组长度
	void bubbleSort(int arr[],int length) == void bubbleSort(int *p,int length);
	*/

	//字符串拷贝 
	char dest[100] = {}; //不能为指针 因为没有开辟空间

	char* origin = "abcdefg";

	copyStringOfArray(dest, origin);//数组拷贝
	copyStringOfP(dest, origin);//指针拷贝

	for (size_t i = 0; i < 8; i++)
	{
		cout << *(dest + i);
	}
	cout<<endl;


	char* p1 = &dest[3];
	cout <<"p[-2]: "<< p1[-2] << endl; //p1[-2] == *(p-2) 当指针操作数组时 下标可以为 负数 

	getchar();

	return 0;


}

int copyStringOfArray(char dest[], char ori[]){
	int i = 0;
	while (ori[i] != 0)
	{
		dest[i] = ori[i];
		i++;
	}
	dest[i] = 0; //字符串末尾
	return 1;
}
int copyStringOfP(char* dest, char* origin){
	while (*dest++ = *origin++)
	{

	}
	return 1;
}