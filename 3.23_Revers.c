#include<stdio.h>
main()
{
	int n, rev;
	
	printf("\n\n\t Input a number to reverse : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rev=n%10;
		printf("  %d",rev);
		n=n/10;
	}
}
	
