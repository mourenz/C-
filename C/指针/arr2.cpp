#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

	//ָ������
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[] = { &a, &b, &c }; // ����һ�����ָ����int�������ݱ������ڴ��ַ������

	cout << "int* arr����" << sizeof(arr) << endl; // 3*4 =12
	cout << "*arr[0]����" << sizeof(*arr[0]) << endl; // sizeof(int) =4

	for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout << *arr[i] << endl;
	}


	cout << "��άָ������" << endl;
	int a1[] = { 1, 2, 3 };
	int a2[] = { 4, 5, 6 };
	int a3[] = { 7, 8, 9 };

	int* arr2[] = { a1, a2, a3 };

	cout << arr2 << endl;
	cout << &arr2[0] << endl; //ǰ���� һ�� �� ���Բ��� arr2 != a1;
	cout << a1 << endl;
	cout << arr2[0] << endl;//  a1 == arr2[0] ��ȷ








	getchar();



}