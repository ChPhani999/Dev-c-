#include<stdio.h>
main()
{
	int n,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=10;i<=n;i++)
	{
		printf("%5d",i);
		i=i+2;
	}
}
