/*
take 10 no. Input from user find out below values
*/
#include<stdio.h>
main()
{
	int i,even=0,odd=0,ce=0,co=0;
	
	printf("\n\n");
	i=1;
	while(i<=10)
	{
		printf(" %d",i);
		
		if(i%2==0)
		{
			ce++;
			even=even+i;
		}
		else
		{
			co++;
			odd=odd+i;
		}
		i++;
	}
	printf("\n\n\t Total Even Number are :== %d",ce);
	printf("\n\n\t Total Odd Number are :== %d",co);
	printf("\n\n\t Total Even Number are :== %d",even);
	printf("\n\n\t Total Odd Number are :== %d",odd);
}
