#include<stdio.h>
main()
{
	int i, n, a=1, b=1, c;
	
	printf("\n\n\t Enter a number to print fibonacci series : ");
	scanf("%d",&n);
	
	printf("\n\n\t %d %d",a,b);
	
	i=1;
	while(i<=n)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
		i++;
	}
	
}
