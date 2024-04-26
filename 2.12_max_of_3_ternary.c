
#include<stdio.h>
main()
{
	int n1,n2,n3,max;
	
	printf("\n\n\t Enter three numbers : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	max=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
	
	printf("\n\n\t The maximum number among %d, %d, and %d is: %d\n", n1, n2, n3, max);
	
}
