#include<stdio.h>
#include<iostream>
using namespace std;


char* findString(char* src, char* dest)
{
	char* fsrc = src;
	char* rsrc = src; // ��¼λ��
	char* tdest = dest;
	while (*fsrc)
	{
		rsrc = fsrc; // ��¼��ʼλ��
		while (*fsrc == *tdest && *fsrc != 0) //hello\0   llo\0  ���һ�λ��ظ��Ƚ� 0==0 ����ͻ��Ҳ��� ����Ҫ�ų�
		{
			fsrc++;
			tdest++;
		}
		if (*tdest == 0)
		{
			cout << "�Ѿ��ҵ�" << endl;
			return rsrc;
		}

		//�ع�
		tdest = dest;
		fsrc = rsrc;//�ҵ���ʼλ��
		fsrc++;//������λ
	}

	return NULL;

}

int main()
{
	// ����ָ���ַ���
	char* p = findString("hello world", "llo");
	cout << *p << endl;

	//�ַ�������
	char* stringArray[] = { "hello", "wotldll" };
	cout << sizeof(stringArray[0]) << endl; //4
	cout << sizeof(stringArray) / sizeof(stringArray[0]) << endl; //2
	for (size_t i = 0; i < sizeof(stringArray) / sizeof(stringArray[0]); i++)
	{

		int count = 0;
		char* str = stringArray[i]; //��ȡ�������ַ���ַ ���ַ�����ֵ 
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
