#include<stdio.h>
main()
{
	float unit,chg,surchg=0,gamt,netamt,total;
		
	printf("\n\n\t Enter Consumed Unit :==");
	scanf("%f",&unit);
	
	if(unit<=50)
	{
		chg = 0.50;
	}
	else if(unit>50 && unit<=150)
	{
		chg = 0.75;
	}
	else if(unit>150 && unit<=250)
	{
		chg = 1.20;
	}
	else 
	{
		chg = 1.50;
	}
	gamt=unit*chg;
	
	surchg=gamt*20/100;
	
	total=gamt+surchg;
	
		
		printf("\n\n\t==================================================================================================");
		printf("\n\n\t\t\t\t Electricity Bill");
		printf("\n\n\t==================================================================================================");
		printf("\n \t Consumed Unit \t Charge per Unit \t surcharge \t Total");
		printf("\n\n\t==================================================================================================");
		printf("\n\n\t\t%.2f \t\t %.2f \t\t %.2f \t\t   %.2f ",unit,chg,surchg,total);
}
