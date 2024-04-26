#include<stdio.h>
main()
{
	float msalary;
	float asalary;
	
	printf("\n\n\t Enter Monthly Salary : = ");
	scanf("%f",&msalary);
	
	asalary = msalary * 12;
	printf("\n\n\t Annual Salary is : %.2f",asalary);
}
