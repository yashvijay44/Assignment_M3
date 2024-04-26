#include<stdio.h>
main()
{
	int arr[50],size,i,max;
	
	printf(" \n\n\t Input the size of array ;==");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\n\n\t Input array element ",i);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\n\n\t Array element  : %d",max);
	
}
