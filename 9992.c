/* write a c program to find the grade of a student*/
#include<stdio.h>
main()
{
	int marks;
	printf("enter the number:");
	scanf("%d",&marks);
	if(marks>=75)
	{
		printf("you are distinct");
	}
	else if(marks>=60&&marks<75)
	{
		printf("1st class");
	}
    else if(marks>=40&&marks<60)
	{
		printf("2nd class");
	}
	else 
	{
		printf("fail");
	}
}
