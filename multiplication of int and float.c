// finding simple interest when principal, rate of interst, time

#include<stdio.h>
main()
{
	int p, t;
	float r;
	scanf("%d%d%f", &p, &t, &r);
	float si = (p*t*r)/100;
	printf("%f", si);
}
