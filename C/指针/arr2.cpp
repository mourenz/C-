#include<stdio.h>
#include<iostream>
using namespace std;

void copyStr(char* str1, char* str2){
	while (*str1)
	{
		str1++; //���һ�ν���ʱ strָ���λ��ָ�� �ַ������� 0
	}
	while (*str2)
	{
		*str1 = *str2;  //��һ�� ����str1Ϊ0��λ�õ��ַ�
		str1++;
		str2++;
	}
}


int main(){

	//ָ������
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[] = { &a, &b, &c }; // ����һ�����ָ����int�������ݱ������ڴ��ַ������

	cout << "int* arr����" << sizeof(arr) << endl; // 3*4 =12
	cout << "*arr[0]����" << sizeof(*arr[0]) << endl; // sizeof(int) =4

	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
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

	int d = 20;
	int* p1 = &d;
	int** p2 = &p1;
	cout << **p2 << endl;


	//����ָ�� ��ŵ���һ��ָ��ĵ�ַ
	cout << "����ָ�����" << endl;
	int** p = arr2;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			//cout << p[i][j]<<",";
			//cout << *(p[i] + j) << ",";
			cout << *(*(p + i) + j) << ",";
		}
		cout << endl;
	}

	cout << "�ַ�������" << endl;
	char ch1[100] = "hello";
	char ch2[50] = "world";
	copyStr(ch1, ch2);
	for (int i = 0; i < 100; i++){
		if (*(ch1+i))cout << *(ch1 + i) << ",";
	}
	


	






	getchar();



}