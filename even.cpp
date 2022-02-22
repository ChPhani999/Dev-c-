#include<stdio.h>
main()
{
	int n,i,sum;
	printf("\n enter how many even number you want:");
	scanf("%d",&n);
	sum=0;
	i=1;
	printf("%d even number natural number are:",n);
	do
	{
	printf("%d ",i*2);
	sum+=i*2;
	i=i+1;
	}while(i<=n);
	printf("\nsum of these number is %d",sum);
	
}
