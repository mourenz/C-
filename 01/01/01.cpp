// 01.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
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
	int d = 5;



	


	return 0;
}

