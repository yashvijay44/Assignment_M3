#include <stdio.h>

int reverse(int);

main()
{
	int num,ans,original;
	
	printf("\n\n\t Please Enter number : ");
	scanf("%d",&num);
	
	original=num;  
	ans=reverse(num); 
	
	if(original != ans)
	
		printf("\n\n\t Number Is Not Palindrome");
	else
		printf("\n\n\t Number Is Palindrome");
}

int reverse(int n)
{
	int i, 
		rem,
		revers=0;
		
	for(i=0;n != i;n/=10)
	{
		rem = n%10;	
		revers = revers * 10 + rem;	
	}
	return revers;
}
