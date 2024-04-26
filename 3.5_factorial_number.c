#include<stdio.h>
main()
{
	int n,i,fact=1;
	
	printf("\n\n\t Input Factorial :==");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("\n\n\t %d",fact);
}
