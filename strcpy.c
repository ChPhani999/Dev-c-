#include <stdio.h>
#include<string.h>
int main()
{
	
  	char str1[20];
   	char str2[20];
  	printf("\n  Enter the String1:  ");
  	gets(str1);
  	strcpy(str2,str1);
  	printf("\n after a copy str2 is %s",str2);
  }
  
