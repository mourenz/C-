#include<stdio.h>
#include<math.h>
#include<iostream>
#include<string.h> //  strlen()
#include<stdlib.h>
#include<time.h>
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
	int p, m;
	p = m = 0;
	while (ch1[p] != '\0')
	{
		ch3[p] = ch1[p];
		p++;
	}

	while (ch2[m] != '\0')
	{
		ch3[p + m] = ch2[m];
		m++;
	}
	ch3[p + m] = '\0';

	for (int i = 0; i < 11; i++){
		cout << ch3[i] << ",";
	}
	cout << endl;

	std::cout << "�����������" << endl;
	// �ַ�����ʹ���ַ�����ʱ �������� 0 �� '\0' ����  һ���ַ�����λ��Ҫ��  �����ֶ���0����
	//	char getCharacter[11];

	//scanf("%10s",getCharacter); // 10ΪԼ��   ��11λΪ 0

	//printf("%s",getCharacter); 
	puts("hello\0world"); // ��� Ϊ hello 

	char arr_string[] = "hello world";
	cout << sizeof(arr_string) << endl; //12
	cout << strlen(arr_string) << endl; // 11  strlen() ��Ҫ string,h ͷ�ļ�

	cout << "===�����====" << endl;
	//����� ��Ҫ���� time.h  stdlib.h
	srand((unsigned int)time(NULL));  //������� ��ʱ��Ϊ����

	for (size_t i = 0; i < 3; i++)
	{
		cout << rand() % 100 << endl; // 0-99
	}

	// �������6��1-32��Χ�Ĳ�ͬ�����
	int arr_random[6] = { 0 };
	int value = 0;
	int flag = 0;
	int j_;

	for (int i = 0; i < 6; i++){
		value = rand() % 32 + 1;
		// ȥ��
		for (j_ = 0; j_ < flag; j_++){
			if (value == arr[j_]){
				i--; // �ظ��� Ҫ��֤6��
				break;
			}
		}
		if (j_== flag){
			arr_random[flag++] = value;
		}
	}
	cout << "6����1-32���Ĳ�ͬ�����" << endl;
	for (int i = 0; i < 6; i++){
		cout << arr_random[i] << ",";
	}



	//
	getchar();




	return 0;
}





