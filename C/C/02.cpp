#include <stdio.h>
#pragma warning(disable:4996)  // ºöÂÔ scanf  unsafe

int main(){
	int  a;
	scanf("%d", &a);
	printf("%d", a);

	char c = 'c';
	printf("%d",sizeof(c));

	return 0;
}