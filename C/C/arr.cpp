#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
#pragma warning(disable:4996)  

int getIntArrayLength(int arr[]){
	return sizeof(arr) / sizeof(arr[0]);
}

int main(){
	//����
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//���鵹��
	int i = 0;
	int j = sizeof(arr) / sizeof(arr[0]) - 1;
	while (i < j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++; //��λ
		j--;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//ð������
	cout << "====ð������===" << endl;
	int arr2[] = { 1, 3, 4, 6, 8, 2, 7, 10, 9, 5 };
	for (int i = 0; i < 10 - 1; i++){  //iΪ��Ҫ�ų���λ��
		for (int j = 0; j < 10 - 1 - i; j++){//ÿ�αȽ��ų����λ��
			if (arr2[j] > arr2[j + 1]){
				int temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
			}
		}
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << arr2[i] << endl;

	}


	//�ַ��� "%s" ����  ��б��0 ����
	char charArray[5] = { 'h', 'e', 'l', 'l', '0' }; // ֻ��һ���ַ�����  %s ��ӡ���������
	char stringArray[] = { 'h', 'e', 'l', 'l', '0', '\0' };
	printf("%s\n", charArray);
	printf("%s\n", stringArray);


	//�ַ�������
	char ch1[] = "hello";  //�ַ���ת��Ϊ�ַ����� �ַ������β ����Ϊ '\0' ch1 �ܳ���Ϊ 6 
	char ch2[] = "world";
	char ch3[20];
	int p,m;
	p = m = 0;
	while (ch1[p]!='\0')
	{
		ch3[p]=ch1[p];
		p++;
	}
	
	while(ch2[m]!='\0')
	{
		ch3[p+m]=ch2[m];
		m++; 
	}
	ch3[p+m]='\0';
	
	for(int i=0;i<11;i++){
		cout<<ch3[i]<<",";
	}


	


	//
	getchar();




	return 0;
}



#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
#pragma warning(disable:4996)  

int getIntArrayLength(int arr[]){
	return sizeof(arr) / sizeof(arr[0]);
}

int main(){
	//����
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//���鵹��
	int i = 0;
	int j = sizeof(arr) / sizeof(arr[0]) - 1;
	while (i < j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++; //��λ
		j--;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//ð������
	cout << "====ð������===" << endl;
	int arr2[] = { 1, 3, 4, 6, 8, 2, 7, 10, 9, 5 };
	for (int i = 0; i < 10 - 1; i++){  //iΪ��Ҫ�ų���λ��
		for (int j = 0; j < 10 - 1 - i; j++){//ÿ�αȽ��ų����λ��
			if (arr2[j] > arr2[j + 1]){
				int temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
			}
		}
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << arr2[i] << endl;

	}


	//�ַ��� "%s" ����  ��б��0 ����
	char charArray[5] = { 'h', 'e', 'l', 'l', '0' }; // ֻ��һ���ַ�����  %s ��ӡ���������
	char stringArray[] = { 'h', 'e', 'l', 'l', '0', '\0' };
	printf("%s\n", charArray);
	printf("%s\n", stringArray);


	//�ַ�������
	char ch1[] = "hello";  //�ַ�����β
	char ch2[] = "world";
	char ch3[20];
	int p,m;
	p = m = 0;
	while (ch1[p]!='\0')
	{
		ch3[p]=ch1[p];
		p++;
	}
	
	while(ch2[m]!='\0')
	{
		ch3[p+m]=ch2[m];
		m++; 
	}
	ch3[p+m]='\0';
	
	for(int i=0;i<11;i++){
		cout<<ch3[i]<<",";
	}


	


	//
	getchar();




	return 0;
}



#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
#pragma warning(disable:4996)  

int getIntArrayLength(int arr[]){
	return sizeof(arr) / sizeof(arr[0]);
}

int main(){
	//����
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//���鵹��
	int i = 0;
	int j = sizeof(arr) / sizeof(arr[0]) - 1;
	while (i < j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++; //��λ
		j--;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//ð������
	cout << "====ð������===" << endl;
	int arr2[] = { 1, 3, 4, 6, 8, 2, 7, 10, 9, 5 };
	for (int i = 0; i < 10 - 1; i++){  //iΪ��Ҫ�ų���λ��
		for (int j = 0; j < 10 - 1 - i; j++){//ÿ�αȽ��ų����λ��
			if (arr2[j] > arr2[j + 1]){
				int temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
			}
		}
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << arr2[i] << endl;

	}


	//�ַ��� "%s" ����  ��б��0 ����
	char charArray[5] = { 'h', 'e', 'l', 'l', '0' }; // ֻ��һ���ַ�����  %s ��ӡ���������
	char stringArray[] = { 'h', 'e', 'l', 'l', '0', '\0' };
	printf("%s\n", charArray);
	printf("%s\n", stringArray);


	//�ַ�������
	char ch1[] = { 'h', 'e', 'l', 'l', 'o' };
	char ch2[] = { 'w', 'o', 'r', 'l', 'd' };
	char ch3[20];
	int p,m;
	p = m = 0;
	while (ch1[p]!='\0')
	{
		ch3[p]=ch1[p];
		p++;
	}
	
	while(ch2[m]!='\0')
	{
		ch3[p+m]=ch2[m];
		m++; 
		
	}
	ch3[p+m]='\0';
	
	for(int i=0;i<11;i++){
		cout<<ch3[i]<<",";
	}


	


	//
	getchar();




	return 0;
}


