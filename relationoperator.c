#include<stdio.h>
void main()
{
int x=5,y=10;
printf("x=%d,y=%d",++x,y--);
printf("x=%d,y%d",x++,++y);
printf("x=%d,y=%d",x,y); 
printf("x=%d,y=%d",x--,y++);
printf("x=%d,y=%d",x,y);
}
