#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30],str2[30];
	printf("enter two strings");
	scanf("%s%s",&str1,&str2);
	if(strcmp(str1,str2)==0)
	{
		printf("the given strings are same");
	}
	else
	{
		printf("the given strings are different");
	}
}
