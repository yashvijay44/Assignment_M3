#include<stdio.h>
main()
{
	int mul=1,i;
	
	i=1;
	while(i<=5)
	{
		mul=mul*i;
		
		i++;
	}
	
	printf("\n\n\t Factorial of the given no : %d",mul);
}
