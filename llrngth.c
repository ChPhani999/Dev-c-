#include<stdio.h>
main()
{
	int length , i;
	char str[20];
	printf("enter a string:");
	gets(str);
	printf("string u entered :");
	puts(str);
	length=0;
	for (i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("\n length :%d ",length);
	
}
