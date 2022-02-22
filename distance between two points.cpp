#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,d;
	printf("enter x1 y1 values");
	scanf("%d%d",&x1,x2);
	printf("enter  x2 y2 values");
	scanf("%d%d",&x2,&y2);
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("distance  = %d",d);
}
