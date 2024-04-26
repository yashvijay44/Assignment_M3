#include<stdio.h>
main()
{
	int a,b,c;
	a=10;
	b=20;
	c=a+b;
	
	printf("\n\n\t a=%d",a);
	printf("\n\n\t b=%d",b);
	printf("\n\n\t c=%d",c);
	
	printf("\n\n\t %d = %d + %d",c,a,b);
	
	c=a-b;
	printf("\n\n\t a=%d",a);
	printf("\n\n\t b=%d",b);
	printf("\n\n\t c=%d",c);
	printf("\n\n\t %d = %d - %d",c,a,b);
	
	c=a*b;
	printf("\n\n\t a=%d",a);
	printf("\n\n\t b=%d",b);
	printf("\n\n\t c=%d",c);
	printf("\n\n\t %d = %d * %d",c,a,b);
	
	
	c=a/b;
	printf("\n\n\t a=%d",a);
	printf("\n\n\t b=%d",b);
	printf("\n\n\t c=%.2f",c);
	printf("\n\n\t %.2f = %d / %d",c,a,b);
	
}
