#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("hello world");
	// c���Ա��� ��Ҫ���� Ԥ����  ת��Ϊ��� --> �������ļ� -->��C���Կ����ӵ���ִ�г����ļ���
	system("calc"); // ��Ҫ �� #include ��<stdlib.h>��; 

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
	printf("%d", c);
	return 0;
}