/*
salary
*/
#include<stdio.h>
main()
{
	int bs,hra,ta,gs;
	
	printf("\n\n\t Enter basic Salary :");
	scanf("%d",&bs);
	
	printf("\n\n\n\t %d",bs);
	
	hra=bs*10/100;
	printf("\n\n\t %d",hra);
	
	ta=bs*5/100;
	printf("\n\n\t %d",ta);
	
	gs=bs+hra+ta;
	printf("\n\n\t %d",gs);
}
