#include<stdio.h>
main()
{
	int n,reve=0,temp;
	
	printf("\n\n\t Enter the Number  : ");
	scanf("%d",&n);
	
	temp=n;
	
	while(temp != 0)
	{
		int digit;
		
		digit=temp%10;
		reve=reve*10+digit;
		printf(" %d",digit);
		temp=temp/10;
	}		
	if(n == reve)
	{
		printf("\n\n\t Number is Palindrome :");
	}
	else
	{
		printf("\n\n\t Number is Not Palindrome :");
	}
}
