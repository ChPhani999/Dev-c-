#include<stdio.h>
main()
{
	int a[15];
	int n,i,key,flag=0;
	printf("\n Enter n value:");
	scanf("%d",&n);
	printf("\n enter elements in an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n elements in an array:");
	for (i=0;i<n;i++)
		{
			printf("%5d",a[i]);
		}
	
	printf("\nenter key value to be searched:");
    	scanf("%d",&key);
    	for (i=0;i<n;i++)
    	{
    		if(key==a[i])
    		{
    			printf("\n %d found at the position %d",key,i+1);
    			flag=1;
			}
		}
		if(flag==0)
		{
			printf("\nsearch unsuccessful");
		}
		else
		{
			printf("\nsearch successful");
		}
}
