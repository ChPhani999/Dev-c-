#include<stdio.h>
int main ()
{
	int n,o,result=0,rem;
	printf("enter number ");
	scanf("%d",&n);
	o=n;
	while(o!=0)
	{
		rem = n%10;
		result+=rem*rem*rem;
		o/=10;
	}
	if(result == n)
	printf("true");
	else
	printf("false");
	return 0;
}
