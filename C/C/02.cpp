#include <stdio.h>
#include<math.h>
#include<iostream>
#include<time.h>
using namespace std;
#pragma warning(disable:4996)  // 忽略 scanf  unsafe

int main(){
	int  a;
	cout << "输入a 的值" << endl;
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

	cout << d << endl;
	cout << "输入任意值" << endl;
	getchar();
	//打印水仙花数 1-999 个位数立方+十位数立方+百位数立方 ==该数本身
	cout << "=======水仙花数=======" << endl;
	for (int i = 1; i <= 999; i++){
		int a = i % 10;
		int b = i / 10 % 10;
		int c = i / 100 % 10;
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i){
			cout << i << endl;
		}
	}

	cout << "随机数" << endl;
	//需要包含头文件 time.h
	srand((unsigned int)time(NULL));// 保证每次随机数不一样
	for (size_t i = 0; i < 10; i++)
	{
		int value = rand()%10; //产生 0-9的随机数
		cout << value << endl;
	}






	return 0;
}