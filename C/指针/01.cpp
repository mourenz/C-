#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int a = 10; //0xfffab
	int* p;    // int* 是一个数据类型 即为指针 p里面装的值 只能是一个存放int数据的内存地址
	p = &a;

	//间接改变a的值 
	*p = 100;
	cout << a << "---" << *p << endl;



	//野指针
	//int* p1 = 100; //即为将内存地址编号为 100的存入 p中 定义不会出错 访问出错
	//空指针
	int* p2 = NULL; //即为p2存放的是 内存地址编号为 0 

	//万能指针 void* 可以接受任意指向数据类型地址

	char* c = "hello";
	void* vc = &c;
	//取万能指针地址所指向的值 需要转换为指定数据类型
	cout << *((char*)vc) << endl;




	
	getchar();



}
