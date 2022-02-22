#include<stdio.h>
int main()
{
	char str[20];
	printf("Enter a string for integer conversion \n");
	gets(str);
	printf("Integer %d\n",atol(str));
}
