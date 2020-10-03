// 01.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#define PRICE 50 //定义常量


int _tmain(int argc, _TCHAR* argv[])
{
	const int num = 100; // 定义常量 不可再修改
	cout << "hello c++ 01 " << endl;
	cout << 5 * PRICE << endl;

	float x = 10.8; //此时 是 double -->float
	int y = 2; 

	cout << x / y << endl;// 5.4 

		//取余必须是整数
	int q = (int)(x / y);
	cout << (int)(x / y) % 2 << endl; // 1

	int z = 5;
	int m = 2;
	cout << z / m << endl; //2

	// 最小的运算单位 为int ; char short 运算时会自动转换为 Int
	int d = 5;



	


	return 0;
}

