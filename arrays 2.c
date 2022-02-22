#include<stdio.h>
main()
{
	int a[10];
	int i;
	printf("\n Enter elements into arrays:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n elements in array with adress:\n");
	for(i=0;i<=9;i++)
	{
		printf("\n%d stored at %u",a[i],&a[i]);
	}
}
