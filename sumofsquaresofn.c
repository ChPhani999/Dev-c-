/*sum of the squares of n natural numbers*/
#include<stdio.h>
main()
{ 
int n,i,sum=0;
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum=sum+i*i;
printf("sum of squares of n=%d\n",sum);
}       
