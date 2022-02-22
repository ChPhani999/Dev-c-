/* write a c program to find the greatest of two numbers*/
#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>=b&&a>=c&&a>=d)
	{
		printf("%d is gratest",a);
	}
	else if (b>=a&&b>=c&&b>=d)
	{ 
	  printf("%d is greatest",b);
	}
	else if (c>=a&&c>=b&&c>=d)
	{
		printf("%d is gratest",c);
	}
	else
	{
		printf("%d is gratest",d);
	}
}
