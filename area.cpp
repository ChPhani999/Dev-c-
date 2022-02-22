#include<stdio.h>
main()
{
	int choice,r,l,w,b,h;
	float area;
	printf("input 1 for the area of circle\n");
	printf("input 2 for the area of rectangle\n");
	printf("input 3 for the area of triangle\n");
	printf("input your choice");
	scanf("%d",&choice);
	switch(choice);
	{
		case1:printf("enter the radius of the circle");
		scanf("%d",&r);
		area=3.14*r*r;
		break;
		case2:printf("enter the width and length of a rectangle");
		scanf("%d",&w,&l);
		area=l*w;
		break;
		case3:printf("enter the base and height of a triangle");
		scanf("%d%d",&b,&h);
		area=0.5*b*h;
		break;
		default:printf("invalid choice");
	}
	printf("the area is %f\n",area);
}
