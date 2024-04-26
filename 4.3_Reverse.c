#include <stdio.h>
void reverse();
main()
{
	printf("\n\n\t Enter Name for reverse : ");
		
	reverse();
}
void reverse()
{
	char c;
	scanf("%c",&c);
	if(c != '\n')
	{
	reverse();
	printf("%c",c);	
	}
}
