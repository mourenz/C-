#include <stdio.h>
#include<math.h>
#include<iostream>
#include<time.h>
using namespace std;
#pragma warning(disable:4996)  // ���� scanf  unsafe

int main(){
	int  a;
	cout << "����a ��ֵ" << endl;
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

	cout << d << endl;
	cout << "��������ֵ" << endl;
	getchar();
	//��ӡˮ�ɻ��� 1-999 ��λ������+ʮλ������+��λ������ ==��������
	cout << "=======ˮ�ɻ���=======" << endl;
	for (int i = 1; i <= 999; i++){
		int a = i % 10;
		int b = i / 10 % 10;
		int c = i / 100 % 10;
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i){
			cout << i << endl;
		}
	}

	cout << "�����" << endl;
	//��Ҫ����ͷ�ļ� time.h
	srand((unsigned int)time(NULL));// ��֤ÿ���������һ��
	for (size_t i = 0; i < 10; i++)
	{
		int value = rand()%10; //���� 0-9�������
		cout << value << endl;
	}






	return 0;
}