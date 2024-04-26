#include <stdio.h>
main()
{
	int i, num[5];
	
	for (i=0;i<5;i++)
	{
		printf("\n\n\t Please Enter Num %d : ",i+1);
		scanf("%d",&num[i]);
	}
	
	for (i=4;i>=0;i--)
	{
		printf("\n\n\t %d",num[i]);	
	}
}
