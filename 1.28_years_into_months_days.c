#include<stdio.h>
main()

{
  int n, month,  days;
 
    printf("Enter the number of year :=");
    scanf("%d", &n);
    month = n*12;
    days =n*365;
    printf ("%d year is equal to %d month,  Or %d days",n, month,  days);
	
}
