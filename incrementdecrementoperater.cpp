#include <stdio.h>
main()
{
	int x,y,i,j;
	i=7;
	j=4;
	x=++i;
	y=++j;
	printf("\nx=%d",x++);
	printf("\nx=%d",++x);
	printf("\ny=%d",y++);
	printf("\ny=%d",++y);
}
