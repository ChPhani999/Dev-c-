#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter number") ;
	scanf("%d",&n);
	printf("the even numbers\n");
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
			sum = sum +i;
		}
	}
	printf("the sum of natural number :%d\n",sum);
	return 0;
}
