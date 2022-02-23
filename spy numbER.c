#include<stdio.h>
int main()
{
    int a,j,i,s=0,p=1;
    printf("enter a number:");
    scanf("%d",&a);
    while(a!=0)
    {
        j=a%10;
        s+=j;
        p*=j;
        a/=10;
    }
    if(s==p)
    printf("%d is a Spy Number",p);
    else
    printf("Not Spy Number");
    
}
