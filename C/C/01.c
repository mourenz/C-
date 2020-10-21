#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("hello world");
	// c语言编译 需要经过 预处理  转换为汇编 --> 二进制文件 -->将C语言库链接到可执行程序文件中
	system("calc"); // 需要 用 #include “<stdlib.h>”; 

	int a, b, c;
	int d = 10;
	//嵌套汇编  f9断点
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