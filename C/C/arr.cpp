#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
#pragma warning(disable:4996)  

int getIntArrayLength(int arr[]){
	return sizeof(arr) / sizeof(arr[0]);
}

int main(){
	//数组
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//数组倒序
	int i = 0;
	int j = sizeof(arr) / sizeof(arr[0]) - 1;
	while (i < j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++; //移位
		j--;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//冒泡排序
	cout << "====冒泡排序===" << endl;
	int arr2[] = { 1, 3, 4, 6, 8, 2, 7, 10, 9 ,5};
	for (int i = 0; i < 10 - 1; i++){  //i为需要排除的位数
		for (int j = 0; j < 10 - 1 - i; j++){//每次比较排除最后位数
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


	//字符串 "%s" 遇到  反斜杠0 结束
	char charArray[5] = { 'h', 'e', 'l', 'l', '0' }; // 只是一个字符数组  %s 打印会出现乱码
	char stringArray[] = { 'h', 'e', 'l', 'l', '0','\0'};
	printf("%s\n",charArray);
	printf("%s\n",stringArray);

	


	//
	getchar();




	return 0;
}


