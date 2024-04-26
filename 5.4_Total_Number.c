#include<stdio.h>
main()
{
	char str[20], i, len=0;
	
	printf("\n\n\t Input string : ");
	//scanf("%s",&str); 
	gets(str);
	
	i=0;
	while(str[i]!='\0')
	{
		printf(" %c",str[i]);
		len++;
		
		
		i++;
	}
	printf("\n\n\t Length of string = %d", len);
	
	
}
