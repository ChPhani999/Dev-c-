#include <stdio.h>
int main()
{
    char names[3][20];
    int i;
    printf("\n enter the 3 names:\n");
    for(i=0;i<3;i++)
    {
    	gets(names[i]);
	}
	 printf("\n names u entered:\n");
	     for(i=0;i<3;i++)
    {
     puts(names[i]);
	}
	 
}
