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
	int arr2[] = { 1, 3, 4, 6, 8, 2, 7, 10, 9 ,5};
	for (int i = 0; i < 10 - 1; i++){  //iΪ��Ҫ�ų���λ��
		for (int j = 0; j < 10 - 1 - i; j++){//ÿ�αȽ��ų����λ��
			if (arr2[j] > arr2[j+1]){
				int temp = arr2[j];
				arr2[j] = arr2[j+1];
				arr2[j+1] = temp;
			}
		}
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << arr2[i] << endl;

	}


	//�ַ��� "%s" ����  ��б��0 ����
	char charArray[5] = { 'h', 'e', 'l', 'l', '0' }; // ֻ��һ���ַ�����  %s ��ӡ���������
	char stringArray[] = { 'h', 'e', 'l', 'l', '0','\0'};
	printf("%s\n",charArray);
	printf("%s\n",stringArray);

	


	//
	getchar();




	return 0;
}


