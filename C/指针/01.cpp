#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int a = 10; //0xfffab
	int* p;    // int* ��һ���������� ��Ϊָ�� p����װ��ֵ ֻ����һ�����int���ݵ��ڴ��ַ
	p = &a;

	//��Ӹı�a��ֵ 
	*p = 100;
	cout << a << "---" << *p << endl;



	//Ұָ��
	//int* p1 = 100; //��Ϊ���ڴ��ַ���Ϊ 100�Ĵ��� p�� ���岻����� ���ʳ���
	//��ָ��
	int* p2 = NULL; //��Ϊp2��ŵ��� �ڴ��ַ���Ϊ 0 

	//����ָ�� void* ���Խ�������ָ���������͵�ַ

	char* c = "hello";
	void* vc = &c;
	//ȡ����ָ���ַ��ָ���ֵ ��Ҫת��Ϊָ����������
	cout << *((char*)vc) << endl;




	
	getchar();



}
