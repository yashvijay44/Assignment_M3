/*
Convert days into months
*/
#include<stdio.h>
main()
{
	int month,days;
	
	printf("\n\n\t Enter Days :=");
	scanf("%d",&days);
	
	if(days == 31)
	{
		printf("\n\n\t January,March,may,july,august,october,deceber");
	}
	else if(days == 29)
	{
		printf("\n\n\t February");
	}
	else if(days == 30)
	{
		printf("\n\n\t April,June,September,November");
	}
	
}
