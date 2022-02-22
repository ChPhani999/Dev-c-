#include<stdio.h>
int main()
{
	int a=12,b=25,c;
	c=a&b;
	printf("a&b=%d",c);
	c=a|b;
	printf("a|b=%d",c);
	c=a^b;
	printf("a^b=%d",c);
	c=a<<1;
	printf("\n a<<2=%d",c);
	c=b>>2;
	printf("b>>2=%d",c);
}
