/*
before_after
*/
#include<stdio.h>
main()
{
	int a=20,b=10;
	
	printf("\n\n\t a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\n\t a=%d b=%d",a,b);

	
}
