#include<stdio.h>
#include<iostream>
using namespace std;


char* findString(char* src, char* dest)
{
	char* fsrc = src;
	char* rsrc = src; // 记录位置
	char* tdest = dest;
	while (*fsrc)
	{
		rsrc = fsrc; // 记录起始位置
		while (*fsrc == *tdest && *fsrc != 0) //hello\0   llo\0  最后一次会重复比较 0==0 满足就会找不到 所以要排除
		{
			fsrc++;
			tdest++;
		}
		if (*tdest == 0)
		{
			cout << "已经找到" << endl;
			return rsrc;
		}

		//回滚
		tdest = dest;
		fsrc = rsrc;//找到起始位置
		fsrc++;//向后边移位
	}

	return NULL;

}

int main()
{
	// 查找指定字符串
	char* p = findString("hello world", "llo");
	cout << *p << endl;

	//字符串数组
	char* stringArray[] = { "hello", "wotldll" };
	cout << sizeof(stringArray[0]) << endl; //4
	cout << sizeof(stringArray) / sizeof(stringArray[0]) << endl; //2
	for (size_t i = 0; i < sizeof(stringArray) / sizeof(stringArray[0]); i++)
	{

		int count = 0;
		char* str = stringArray[i]; //获取到的是字符地址 非字符串的值 
		while (*stringArray[i])
		{
			count++;
			stringArray[i]++;
		}
		cout << "count=" << count << endl;


		for (size_t j = 0; j < count; j++)
		{
			cout << (str[j]) << ",";
		}
		cout << endl;



	}



	getchar();
}
