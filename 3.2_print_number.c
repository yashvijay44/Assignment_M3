#include<stdio.h>
main()
{
	int n[5],i;
	
	
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t Enter The Number [%d] :==",i);
		scanf("%d",&n[i]);
	}
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t Display Number[%d] :== %d",i,n[i]);
	}
}
