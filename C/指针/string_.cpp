#include<stdio.h>
#include<iostream>
using namespace std;


char* findString(char* src, char* dest){
	char* fsrc = src;
	char* rsrc = src; // ��¼λ��
	char* tdest = dest;
	while (*fsrc)
	{
		rsrc = fsrc; // ��¼��ʼλ��
		while (*fsrc == *tdest &&*fsrc != 0)  //hello\0   llo\0  ���һ�λ��ظ��Ƚ� 0==0 ����ͻ��Ҳ��� ����Ҫ�ų�  
		{
			fsrc++;
			tdest++;
		}
		if (*tdest == 0){
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

int main(){
	// ����ָ���ַ���
	char* p = findString("hello world", "llo");
	cout << *p << endl;
	getchar();
}