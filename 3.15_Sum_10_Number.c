#include<stdio.h>
main()
{
	int i,n,sum=0;
	
	printf("\n\n\t Enter the number :==");
	scanf("%d",&n);

	i=1;
	while(i<=10)
	{
		sum=n+i;
		printf("%d ",sum);
		i++;
	}
	printf("\n\n\t Sum = %d",sum);
	

}
