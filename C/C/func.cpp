#include<stdio.h>
#include "sub.h"; // 包含自己的头文件 必须有头文件中对应实现的函数
using namespace std;
#include<iostream>
extern int add(int , int ); //申明函数
int main(){
	add(3, 2);
	cout << sub(3, 1) << endl;
	getchar();
}

int add(int a, int b){
	return a + b;
}
