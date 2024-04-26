#include<stdio.h>
main()
{
	int c_id;
	char c_name[30];
	float unit,chg,surchg=0,gamt,netamt,total;
	
	printf("\n\n\t Enter Customer ID :==");
	scanf("%d",&c_id);
	
	printf("\n\n\t Enter Customer Name :==");
	scanf("%s",&c_name);
	
	printf("\n\n\t Enter Consumed Unit :==");
	scanf("%f",&unit);
	
	if(unit<350)
	{
		chg = 1.20;
	}
	else if(unit>=350 && unit<600)
	{
		chg = 1.50;
	}
	else if(unit>=600 && unit<800)
	{
		chg = 1.80;
	}
	else 
	{
		chg = 2.00;
	}
	gamt=unit*chg;
	if(gamt>800)
	{
		surchg=gamt*18/100;
	}
	total=gamt+surchg;
	if(total <256)
		total = 256;
		printf("\n\n\t==================================================================================================");
		printf("\n\n\t\t\t\t Electricity Bill");
		printf("\n\n\t==================================================================================================");
		printf("\n \tCustomer ID\t Customer Name \t Consumed Unit \t Charge per Unit \t surcharge \t Total");
		printf("\n\n\t==================================================================================================");
		printf("\n\n\t %d \t\t  %s \t\t%.2f \t\t %.2f \t\t %.2f \t   %.2f ",c_id,c_name,unit,chg,surchg,total);
}
