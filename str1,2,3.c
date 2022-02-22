#include<stdio.h>
main()
{
	char str1[20],str2[20],str3[40];
	int i,j;
	printf("\n enter string1:");
	gets(str1);
	printf("\n enter string2:");
	gets(str2);
	for (i=0;str1[i]!='\0';i++)
	{
		str3[i]=str1[i];
	}
	for (j=0;str2[j]!='\0';j++,i++)
	{
		str3[i]=str2[j];
	}
	str3[i]='\0';
	printf("\n The strings are:%s",str3);
}
