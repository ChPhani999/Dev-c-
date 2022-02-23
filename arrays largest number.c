#include<stdio.h>
int main()
{
	int a[15],n,i,large;
	printf("\n enter n value:");
	scanf("%d",&n);
	printf("\n enter the elements intoarra:");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);	
	}
	printf("\ elements inn the array are");
	for  (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	large=a[0];
	for(i=0;i<n;i++)
	{
		if (a[i]>large)
		{
			large=a[i];
		}
	}
	printf("largest element in given number:%d",large);
	
}
