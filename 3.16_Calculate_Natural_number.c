#include<stdio.h>
main()
{
	int i, sum=0;

	i=1;
	while(i<=10)
	{
		sum=sum+i;
		printf("%d ",sum);
		i++;
	}
	printf("\n\n\t Sum = %d",sum);
}
