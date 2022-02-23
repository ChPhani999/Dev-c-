#include<stdio.h>
void main()
{
	int i=1,n,rem=0,p,a;
	printf("enter the value of n:");
	scanf("%d",&n);
	p=n;
    while(n>0)
		{
			a=n%10;
	       rem=(rem*10)+a;
	       n=n/10;
		}
		if (rem==p)
		{
			printf("palindrome");
		}
		else
		{
			printf(" not a palindrome.");
		}
	
}
