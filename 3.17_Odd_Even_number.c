#include<stdio.h>
main()
{
	int arr[50],i,sum=0,size;
	
	printf("\n\n\t Input the size of Array :");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t Input Array Element [%d] :",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		
		if(arr[i]%2==0)
		{
			printf("\n Even number %d :",arr[i]);
		}
		else
		{
			printf("\n Odd number %d :",arr[i]);
		}
		
	}
	
}
