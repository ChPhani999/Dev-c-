/* write a c program to find greatest of 3 numbers using else if ladder*/
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if((a>=b)&&(a>=c))
	{
    printf("%d is greatest number",a);
    }
	else if((b>=a)&&(b>=c))
	{
		printf("%d is greatest number",b);
	}
	else
	{
		printf("%d is greatest number",c);
	}
	
}
