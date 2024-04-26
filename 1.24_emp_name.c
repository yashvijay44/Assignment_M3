#include<stdio.h>
main()
{
	int bs1,bs2,bs3,bs4,bs5;
	char e1[20],e2[20],e3[20],e4[20],e5[20];
	int avg,total;
	
	printf("\n\n\t Enter Employee No1. Name :==");
	scanf("%s",&e1);
	
	printf("\n\n\t    salary of %s:==",e1);
	scanf("%d",&bs1);
	
	printf("\n\n\t Enter Employee No2. Name :==");
	scanf("%s",&e2);
	
	printf("\n\n\t    salary of %s:==",e2);
	scanf("%d",&bs2);

	printf("\n\n\t Enter Employee No3. Name :==");
	scanf("%s",&e3);
	
	printf("\n\n\t    salary of %s:==",e3);
	scanf("%d",&bs3);
	
	printf("\n\n\t Enter Employee No4. Name :==");
	scanf("%s",&e4);
	
	printf("\n\n\t    salary of %s:==",e4);
	scanf("%d",&bs4);
	
	printf("\n\n\t Enter Employee No5. Name :==");
	scanf("%s",&e5);
	
	printf("\n\n\t    salary of %s:==",e5);
	scanf("%d",&bs5);
	
	total=bs1+bs2+bs3+bs4+bs5;
	avg=total/5;
	
	printf("\n\n\t Total salary %d \t Avg Salary %d",total,avg);
}
