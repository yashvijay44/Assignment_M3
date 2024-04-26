/*
convert years into days and days into years
*/
#include<stdio.h>
main()
{
	int n,year,days;
 
    printf("\n\n\tEnter the number of Year :==");
    scanf("%d", &n);
    
    days =n*365;
    printf ("\n\n\t%d year is equal to  %d days",n, days);
            
    printf("\n\n\tEnter the number of days :=");
    scanf("%d", &n);
    
	year=n/365;
	printf("\n\n\t %d Days to Yea %d",n,year);
}
