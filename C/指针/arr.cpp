#include<stdio.h>
#include<iostream>
using namespace std;

extern int copyStringOfArray(char*,char*);

int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;

	cout << *(p + 1) << endl; //2
	
	p++; //ָ�룫1 *sizeof(��ָ�����������);
	int step = p - arr; // 1  ����ָ���ƫ���� /sizeof(��ָ�����������)
	cout << step << endl;

	/**
	ע�⺯������ʽ����Ϊ ����ʱ ������Զ��˻�Ϊָ�� ������ݳ��ȶ�ʧ ��������ָ�뻹������ �����ƶ����鳤��
	void bubbleSort(int arr[],int length) == void bubbleSort(int *p,int length);
	*/

	//�ַ������� 
	char *dest="";

	copyStringOfArray(dest, "abcdefg");

	for (size_t i = 0; i < 8; i++)
	{
		cout << *(dest + i) << endl;
	}

	getchar();

	return 0;


}

int copyStringOfArray(char dest[],char ori[]){
	int i = 0;
	while (ori[i]!=0)
	{
		dest[i] = ori[i];
		i++;
	}
	dest[i] = 0;
	return 1;
}