#include <stdio.h>
main()
{
	char s_name[5][20];
	int i ;
	
	for (i=0;i<5;i++)
	{
		printf("\n\n\t Please Enter Student [%d] Name : ",i+1);
		scanf("%s",&s_name[i]);
	}

	printf("\n\n\t Student List -: \n \t-----------------------------\n");

	for (i=0;i<5;i++)
	{
		printf("\n\t %d %s",i+1,s_name[i]);
	}
}
