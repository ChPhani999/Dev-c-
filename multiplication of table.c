#include<stdio.h>
main()
{
	int n,k,i;
	printf("enter the value of n and k:");
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++)
	{
		printf("\n%d*%d = %d",n,i,n*i);
	} 
}

