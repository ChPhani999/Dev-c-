#include<stdio.h>
void main()
{
	int i=1,n,rem;
	printf("enter the value of n:");
	scanf("%d",&n);
	
        if(rem=n%10)
		{
			n=n/10;
		printf("%d is a palondrone");
			
		}
		else
		{
			printf(" %d is not a palondrone.");
		}
	
}
