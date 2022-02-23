#include<stdio.h>
int main()
{
	int a[15],n,i,small;
	printf("\n enter n value:");
	scanf("%d",&n);
	printf("\n enter the elements into array:");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);	
	}
	printf("\n elements inn the array are");
	for  (i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
	small=a[0];
	for(i=0;i<n;i++)
	{
		if (a[i]<small)
		{
			small=a[i];
		}
	}
	printf("\n smallest element in given numbers is :%d",small);
	
}
