#include<stdio.h>
main()
{
	int mul=1,i,n;
	
	printf("\n\n\t Enter The Number  :==");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
		
		
	}
	
	printf("\n\n\t Factorial of the given no : %d",mul);
}
