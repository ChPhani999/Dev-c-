/* write a c program to find biggest of 3 numbers*/
#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter the 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
		printf("\n%d is biggest number",a);
    	}
    	else
    	{
    		printf("\n %d is biggest number",c);
		}
	}
	else
  {
  	if(b>c)
  	{
  		printf(" %d is biggest number",b);
	  }
	  else
	  {
	  	printf("%d is biggest number",c);
	  }
  }
}
