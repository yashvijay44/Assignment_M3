#include<stdio.h>
main()
{
	int no,a,r,arm=0;
	
	printf("\n\n\t Enter Any Number :==");
	scanf("%d",&no);
	
	a=no;
	while(no>0)
	{
		r=no%10;
		arm=(r*r*r)+arm;
		no=no/10;
	}
	if(a==arm)
	{
		printf("\n\n\t %d is an Armstrong Number ",no);
	}
	else
	{
		printf("\n\n\t %d is not an Armstrong Number ",no);
	}
}
