#include <stdio.h>
#include<iostream>
using namespace std;
#pragma warning(disable:4996)  // ���� scanf  unsafe

int main(){
	int  a;
	scanf("%d", &a);
	cout << endl;
	printf("%d", a);
	cout << endl;
	char c = 'c'; // ռ���ڴ�1���ֽ�
	printf("%p", &c);
	cout << endl;

	a = 20;
	printf("%d", &a);
	cout << endl;

	c = 'd';
	
	printf("%c", a);
	cout << endl;
	

	putchar('B'); // ��� B
	putchar('A'); //��� A
	cout << endl;
	int getChar = getchar(); // ���ܼ������� ֻ��Ϊ�ַ�
	putchar(getChar); //��������ַ�
	cout << endl;
	

	//���ȼ� ��Ŀ�����>˫Ŀ>��Ŀ
	//��Ŀ�� �� ++  ˫Ŀ��+ - * /  &&  ||
	int d = !1 + 2 && 3; // 1
	
	cout <<d<< endl;

	getchar();
	return 0;
}