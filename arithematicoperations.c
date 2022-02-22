/*Arithematic operation with switch*/
#include<stdio.h>
main()
{
int a,b,op,n;
printf("enter a,b values\n");
scanf("%d%d",&a,&b);
printf("1.additon\n 2.subtraction\n 3.multiplication\n");
printf("enter your choice");
scanf("%d",&n);
switch(n)
  { 
   case 1:op=a+b;
   break;
   case 2:op=a-b;
   break;
   case 3:op=a*b;
   break;
   default:printf("wrong choice\n");
   break;
	}
printf("operation value=%d\n",op);
}
		      
  
	
