// 01.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
#define PRICE 50 //���峣��


int _tmain(int argc, _TCHAR* argv[])
{
	const int num = 100; // ���峣�� �������޸�
	cout << "hello c++ 01 " << endl;
	cout << 5 * PRICE << endl;

	float x = 10.8; //��ʱ �� double -->float
	int y = 2; 

	cout << x / y << endl;// 5.4 

		//ȡ�����������
	int q = (int)(x / y);
	cout << (int)(x / y) % 2 << endl; // 1

	int z = 5;
	int m = 2;
	cout << z / m << endl; //2

	// ��С�����㵥λ Ϊint ; char short ����ʱ���Զ�ת��Ϊ Int

	short i = 50000; //short ���ֵΪ 32767 ��Сֵ -32768

	int i1 = 10;
	i1 *= 5; // i1=i1*5

	x = 0, y = 0;
	x += 2, y += 2;
	q = ((x++), (y++));  // q=2
	cout << q << endl;
	

	cout << fixed << setprecision(2); // ����С������ʾλ��Ϊ2 ��Ҫͷ�ļ�Ϊ iomanip ��Ϊ #include<iomanip>
	cout << 2.567 << endl;  //2.57


	cout << !(18==19)<<endl; //1 
	bool flag = true;

	// �߼��������ȼ�  !> && > ||  
	flag = !1 || 2 && 2;
	cout << flag << endl; //1


	switch (flag)   // ����Ϊ�ַ��� not string
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

