/*largest of any three numbers*/
#include<stdio.h>
main()
{ 
int a,b,c;
printf("enter a,b,c values:");
scanf("%d%d%d",&a ,&b ,&c);
if(a>b && a>c)
printf("%d is a big\n",a);
else
if(b>c)
printf("%d is big\n",b);
else
printf("%d is big\n",c);
}

