#include<stdio.h>
main()
{
	int n,product=1,remainder;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		product=product*remainder;
		n=n/10;
	}
	printf(" product of the value is %d",product);
}
