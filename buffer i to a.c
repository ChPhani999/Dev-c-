#include <stdio.h>
#include<stdlib.h>
main()
{
	
  	char buffer[50];
  	int a=456;
  	itoa (a,buffer,2);
  	printf("\n Binary numbers :%s  ",buffer);
  	itoa (a,buffer,16);
  	printf("\n hexadecimal numbers :%s ",buffer);
  }
  
