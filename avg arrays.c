#include<stdio.h>
main()
{
	int a[20];
	int i,n,sum=0;
	float avg;
	printf("\n Enter num of  elements into arrays u want to enter:");
	scanf("%d",&n);
	printf("\n enter elements in an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nelements in an array:");
	for (i=0;i<n;i++)
		{
			printf("%3d",a[i]);
		}
	for (i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\nsum of an array is %d ",sum);
	avg= (float)sum/n;
	printf("\naverage is %f ",avg);
}
