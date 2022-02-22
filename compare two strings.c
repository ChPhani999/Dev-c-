#include <stdio.h>
int main()
{
	int l1=0,l2=0,i,j,c=0;
  	char Str1[100], Str2[100];
  	int i;
  	printf("\n  Enter the First String :  ");
  	gets(Str1);
  	printf("\n  Enter the Second String :  ");
  	gets(Str2);
  	
  	for(i = 0; Str1[i]!='\0'; i++)
  	  {
  		l1++
	  }
	    	for(i = 0; Str1[i]!='\0'; i++)
              {
              	l2++
			  }
    if (l1==l2)
    {
    	for(i=0,j=0;i<=l1;j<l2;i++,j++)
    	{
			if(Str1[i]!= Str2[i])
			{
				c==0;
				break;
			}
			else 
			c++;
		}
    	if (c==0)
    	
	}
  
   	{
   		printf("\n str1 is < str2");
	}
	else if(Str1[i] > Str2[i])
   	{
   		printf("\n str1  > str2");
	}
	else
   	{
   		printf("\n str1 = str2");
	}
  	
  	return 0;
}
