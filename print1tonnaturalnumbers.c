/*1 to n natural numbers sum*/
 #include<stdio.h>
 main()
 { 
 int i,n,sum=0;
 printf("enter n values");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  { 
   printf("%d\n",i);
   sum=sum+i;
  }
  printf("sum=%d\n",sum);
 }
