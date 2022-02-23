#include<stdio.h>
#include<math.h>
main()
{
  int a,b,c;
  float d,x1,x2,r;
  	printf("enter the 1st num:");
  	scanf("%d",&a);
  		printf("enter the 2nd  num:");
    scanf("%d",&b);
    printf("enter the 3rd  num:");
    scanf("%d",&c);
    d=(b*d)-4*a*c;
    r=sqrt(d);
    if(d==0)
    {
    	x1=(-b+r)/(2*a);
    	printf("the roots are %fand%f",x1);
	}
	else if(d>0)
	{
	printf("the roots are %fand%f",x1,x2);

	}
	else
	{
	  	printf("the roots are imaginary");

	}



}
