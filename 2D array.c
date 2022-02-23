#include<stdio.h>
int main()
{
	int a[3][4],i,j;
	printf("\n enter elements:");

	for(i=0;i<3;i++)
	{
	 for(j=0;j<4;j++)
	{
	  scanf("%d",&a[i][j]);	
	}
	}
	printf("\n elements in the 2d array are:");
	for(i=0;i<3;i++)
	{
	 for(j=0;j<4;j++)
	{
	  printf("%3d",a[i][j]);	
	}
	printf("\n");
	}
	
}
