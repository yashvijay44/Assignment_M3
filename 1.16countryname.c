/*
country’s name abbreviated
*/
#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	
	printf("\n\n\t Enter Country Name :");
	gets(str);
	
	printf("\n\n\t %s",str);
	puts(str);
	
	printf("\n\n\t %c%c",str[0]),str[9];
}
