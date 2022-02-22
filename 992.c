#include<stdio.h>
main()
{
	int a,b,x;
	printf("\n enter the 2 numbers:");
	scanf("%d %d",&a,&b);
	x=(a>b)?a:b;
	printf("\n biggest  numbers %d and %d is %d",a,b,x);
}
