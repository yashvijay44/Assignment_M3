
#include<stdio.h>
main()
{
	int n1,n2,n3,min;
	
	printf("\n\n\t Enter three numbers : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	min=(n1<n2)?((n1<n3)?n1:n3):((n2<n3)?n2:n3);
	
	printf("\n\n\t The minimum number among %d, %d, and %d is: %d\n", n1, n2, n3, min);
	
}
