#include<stdio.h>
#include<math.h>
#include<iostream>
#include<string.h> // 
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
	int arr2[] = { 1, 3, 4, 6, 8, 2, 7, 10, 9, 5 };
	for (int i = 0; i < 10 - 1; i++){  //i为需要排除的位数
		for (int j = 0; j < 10 - 1 - i; j++){//每次比较排除最后位数
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


	//字符串 "%s" 遇到  反斜杠0 结束
	char charArray[5] = { 'h', 'e', 'l', 'l', '0' }; // 只是一个字符数组  %s 打印会出现乱码
	char stringArray[] = { 'h', 'e', 'l', 'l', '0', '\0' };
	printf("%s\n", charArray);
	printf("%s\n", stringArray);


	//字符串拷贝
	char ch1[] = "hello";  //字符串转换为字符数组 字符数组结尾 必须为 '\0' ch1 总长度为 6 
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
	cout<<endl;

	std::cout<<"输入五个汉字"<<endl;
	// 字符串的使用字符数组时 必须遇到 0 或 '\0' 结束  一：字符数组位数要大  二：手动填0结束
	char getCharacter[11];
	
	//scanf("%10s",getCharacter); // 10为约束   第11位为 0
	
	//printf("%s",getCharacter); 
	puts("hello\0world"); // 输出 为 hello 

	char arr_string[] =  "hello world";
	cout << sizeof(arr_string) << endl; //12
	cout << strlen(arr_string) << endl; // 11  strlen() 需要 string,h 头文件
	


	//
	getchar();




	return 0;
}




