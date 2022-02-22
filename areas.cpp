#include<stdio.h>
int main()
{
	int choice, r, l,w,b,h;
	float area;
	printf("input 1 area of circle\n");
	printf ("input2 area of rectagle\n");
	printf(" input 3 area of triangle\n");
	printf("input your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("input radius of circle");
			scanf("%d",&r);
			area=3.14*r*r;
			break;
			case 2:
				printf("input length and width of rectangle");
				scanf("%d%d",&l,&w);
				area=l*w;
				break;
		case3:
			printf("input height and bredth of triangle");
			scanf("%d%d",&h,&b);
			area=h*b;
			break;
			deafalut:
				printf("invalid choice");
	}
	printf("area =%f",area);
	return 0;
}
