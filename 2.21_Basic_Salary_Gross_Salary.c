#include<stdio.h>
main()
{
	float  bs,hra,da,gs;
	
	printf("\n\n\t Enter basic Salary :");
	scanf("%f",&bs);
	if(bs<=10000)
	{
		hra=bs*20/100;
		da=bs*80/100;
	}
	else if(bs<=20000)
	{
		hra=bs*25/100;
		da=bs*90/100;
	}
	else if(bs>20000)
	{
		hra=bs*25/100;
		da=bs*90/100;
	}
	
	
	gs=bs+hra+da;
	printf("\n\n\t %.2f",gs);
}
