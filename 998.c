#include<stdio.h>
main()
{
     char ch;
	printf("\n enter the character:");
	scanf("%c",& ch);
	if (ch>'0' && ch<'@')
	{
		printf("\n %c is a digit.",ch);
	}
	else 
	{
		printf("\n %c is not a digit.");

	}

}
