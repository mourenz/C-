#include <stdio.h>
#include <stdlib.h>

int main01(){
	printf("hello world");
	// c���Ա��� ��Ҫ���� Ԥ����  ת��Ϊ��� --> �������ļ� -->��C���Կ����ӵ���ִ�г����ļ���
	//system("calc"); // ��Ҫ �� #include ��<stdlib.h>��; 

	int a, b, c;
	int d = 10;
	//Ƕ�׻��  f9�ϵ�
	__asm{
		mov a,10
		mov b,20
		mov eax ,a
		add eax,b
		mov c,eax
	}
	// ctrl+j ������ʾ
	//printf("%d", c);

	printf("%.2f", 2.967);

	return 0;
}