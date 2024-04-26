#include<stdio.h>
main()
{
	char name[5][20];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Input Name [%d] :",i);
		scanf("%s",&name[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Name [%d] : %s",i,name[i]);
	}
}
