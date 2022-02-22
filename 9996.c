/* write a c program to find greatest of 3 numbers using turnery operators*/
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	((a>=b)&&(a>=c))?
    printf("%d is greatest number",a):
	((b>=a)&&(b>=c))?
	printf("%d is greatest number",b):
		printf("%d is greatest number",c);
}
