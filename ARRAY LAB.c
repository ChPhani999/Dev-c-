#include <stdio.h>
int main()
{
    int a[10], n,ctr=0;
    int i, j;
    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements in the array :\n");
    for(i=0;i<n;i++)
    {
	    scanf("%d",&a[i]);
	}
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0; j<n; j++)
        {
            /*Increment the counter when the search value is duplicate.*/
            if (i!=j)
            {
		       if(a[i]==a[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",a[i]);
        }
    }
}

