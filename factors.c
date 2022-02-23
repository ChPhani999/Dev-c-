#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("\n factors of %d:",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%5d",i);
			count++;
		}
	}
	printf("\n no of factors=%d",count);
}
