#include<stdio.h>
#include "sub.h"; // �����Լ���ͷ�ļ� ������ͷ�ļ��ж�Ӧʵ�ֵĺ���
using namespace std;
#include<iostream>
extern int add(int , int ); //��������
int main(){
	add(3, 2);
	cout << sub(3, 1) << endl;
	getchar();
}

int add(int a, int b){
	return a + b;
}
