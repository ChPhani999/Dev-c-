#include <stdio.h>  
int main()  
{  
   int n,i=0;  // variable declaration  
    
   printf("Enter a number");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10; 
	  i++;
     
   }  
     
   printf("\nThe number of digits in an integer is : %d",i);  
    return 0;  
} 
