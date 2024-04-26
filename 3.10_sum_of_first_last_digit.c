/*
summation of first and last
Digit.
*/
#include<stdio.h>
main()
{
	int n=0,first=0,last=0,sum=0;
	
	printf("\n\n\t Enter the Number :==");
	scanf("%d",&n);
	
	last=n%10;
	while(n>10)
	{
		n=n/10;
	}
	first=n;
	sum=first+last;
	
	printf("\n sum of first digit and last digit %d %d = %d",first,last,sum);
}
