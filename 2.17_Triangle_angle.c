#include<stdio.h>

main()
{
	int ang1,ang2,ang3;
	
	printf("Enter the value of angle1 :");
	scanf("%d",&ang1);
	printf("Enter the value of angle2 :");
	scanf("%d",&ang2);
	printf("Enter the value of angle3 :");
	scanf("%d",&ang3);
	
	if(ang1+ang2+ang3==180)
	{
		printf("Triangle can be formed with the given angle");
	}
	else
	{
	printf("Triangle cannot be formed with the given angle");	
	}
}
