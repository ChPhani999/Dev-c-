#include<stdio.h>
main()
{
	int n,sum=0,remainder;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	printf(" sum of the value is %d",sum);
}
