/* write a c program to simulate a simple caluculator*/
#include<stdio.h>
main()
{
	char ch;
	int a,b;
    printf("enter an arithmetic operator:");
    scanf("%c",&ch);
   	printf("\n enter 2 numbers:");
	scanf("%d%d",&a,&b);
    switch(ch)
	{
		case '+':printf("\nsum is %d",a+b);break;
		case '-':printf("difference is %d",a-b);break;
		case '*':printf("\multiplication is %d",a*b);break;
		case '/':printf(" quotient is %d", a/b);break;
		case '%':printf("remainder is %d",a%b);break;
		default :printf("\n invalid choice");
	}
}
