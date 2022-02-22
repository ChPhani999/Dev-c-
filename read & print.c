#include<stdio.h>
main()
{
	int a[3][4];
	int i,j;
	printf("\n enter the values into matrix A:\n");
	for(i=0;i<3;i++)
	{
			for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
		printf("\n elements in the matrix A:\n");
	    for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("\n %d stored at %u ", a[i][j],&a[i][j]);
		}

	}
}
