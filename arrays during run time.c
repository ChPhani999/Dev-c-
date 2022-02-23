#include<stdio.h>
main()
{
	int a[10];
	int i;
	printf("\n enter the elements into array:");
	for(i=0;i<=9;i++)
	{
	  scanf("%d",&a[i]);
    }
    printf("\nelements in array:\n");
    for(i=0;i<=9;i++)
    {
    	scanf("%d",&a[i]);
	}
	    printf("\nelements in array:\n");
    for(i=0;i<=9;i++)
    {
    	print("\n %d stored at %u \n,",a[i],&a[i]);
	}

}
