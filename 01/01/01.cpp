// 01.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
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

	short i = 50000; //short 最大值为 32767 最小值 -32768

	int i1 = 10;
	i1 *= 5; // i1=i1*5

	x = 0, y = 0;
	x += 2, y += 2;
	q = ((x++), (y++));  // q=2
	cout << q << endl;
	

	cout << fixed << setprecision(2); // 设置小数点显示位数为2 需要头文件为 iomanip 即为 #include<iomanip>
	cout << 2.567 << endl;  //2.57


	cout << !(18==19)<<endl; //1 
	bool flag = true;

	// 逻辑运算优先级  !> && > ||  
	flag = !1 || 2 && 2;
	cout << flag << endl; //1


	switch (flag)   // 不能为字符串 not string
	{
		case true:
			cout << "true" << endl;
			break;
	default:
		cout << "false" << endl;
		break;
	}



	


	return 0;
}

