#include <stdio.h>
#include<iostream>
using namespace std;
#pragma warning(disable:4996)  // 忽略 scanf  unsafe

int main(){
	int  a;
	scanf("%d", &a);
	cout << endl;
	printf("%d", a);
	cout << endl;
	char c = 'c'; // 占用内存1个字节
	printf("%p", &c);
	cout << endl;

	a = 20;
	printf("%d", &a);
	cout << endl;

	c = 'd';
	
	printf("%c", a);
	cout << endl;
	

	putchar('B'); // 输出 B
	putchar('A'); //输出 A
	cout << endl;
	int getChar = getchar(); // 接受键盘输入 只能为字符
	putchar(getChar); //输出单个字符
	cout << endl;
	

	//优先级 单目运算符>双目>三目
	//单目： ！ ++  双目：+ - * /  &&  ||
	int d = !1 + 2 && 3; // 1
	
	cout <<d<< endl;

	getchar();
	return 0;
}