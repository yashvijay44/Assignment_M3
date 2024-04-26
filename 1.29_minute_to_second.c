/*
Convert minutes into seconds and hours
*/
#include<stdio.h>
main()
{
	float n,minute,second,hour;
	
	printf("\n\n\t Enter Minute :==");
	scanf("%f",&n);
	
	second=n*60;
	hour=n/60;
	printf("\n\n\t %.f  second,\t\t%.2f hour",second,hour);
}
