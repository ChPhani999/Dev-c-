/* write a c program to find whether the num is positive(or)-ve(or)zero using else if ladder*/
#include<stdio.h>
main()
{
	int n;
	printf("enter the n value:");
	scanf("%d",&n);
	if(n>0)
    {
    	printf("%d is positive number",n);
	}
	else if(n<0)
	{
		printf("%d is negative number",n);
	}
	else
	{
		printf(" you entered 0");
	}
} 
