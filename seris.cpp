#include<stdio.h>
int main()
{
	int i,n;
	float s=0.0;
	printf("input number of terms");
	scanf("%d",&n);
	printf("\n\n");
	for(i=1;i<=n;i++)
	{
	if(i<n)
	{
		printf("1/%d+",i);
		s=s+1/(float)i;
	}
	if(i==n)
	{
		printf("1/%d",i);
		s=s+1/(float)i;
	}
	}
	printf("sum of seris %d:%f",n,s);
}
