#include <stdio.h>
int main()
{
	int a=0; int b=0; int c=0; int d=0;
	scanf("%d %d %d", &a,&b,&c);
	d = a * (b + c);
	printf("d=%d\n", d);
	return 0;
}