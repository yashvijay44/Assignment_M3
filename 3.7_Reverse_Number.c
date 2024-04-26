#include<stdio.h>
main()
{
	int n,i;
	
	printf("\n\n\t Enter Number :==");
	scanf("%d",&n);
	
	while(n>0)
	{
		i=n%10;
		printf(" %d",i);
		n=n/10;
	}
}
