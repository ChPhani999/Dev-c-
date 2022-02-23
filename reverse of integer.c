#include<stdio.h>
main()
{
	int n,remainder;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(n!=0)
	{
		
		remainder=n%10;
		printf(" %d",remainder);
         n=n/10;
	}
	
}
