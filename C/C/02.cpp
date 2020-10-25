#include <stdio.h>
#pragma warning(disable:4996)  // 忽略 scanf  unsafe

int main(){
	int  a;
	scanf("%d", &a);
	printf("%d", a);

	char c = 'c'; // 占用内存1个字节
	printf("%p", &c);

	a = 20;
	printf("%d", &a);

	c = 'd';
	
	printf("%c", "\a");

	return 0;
}