#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j;
	printf("\n enter the values into  matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
			printf("\n elements in the matrix A:\n");
				for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d",a[i][j]);
		}
		printf("\n");
	}
		printf("\n enter the values into  matrix B:\n");
			for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

			printf("\n elements in the matrix B:\n");
				for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d",b[i][j]);
		}
			printf("\n");
	}
	printf("addition of  two matrices:\n");
     for (i=0;i<3;i++)
    {
	 	for(j=0;j<3;j++) 
    {
     	c[i][j]=a[i][j]+b[i][j];
		printf("%5d",c[i][j]);
	}
	printf("\n");
    }
}
