#include <stdio.h>
main()
{
	int i, alfa=0, digit=0, sp=0;
	char str[100];
	
	printf("\n\n\t Please Enter String : ");
	gets(str);
	
	for (i=0; str[i] != '\0';i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
		{
            alfa++;
        } 
		else if (str[i] >= '0' && str[i] <= '9') 
		{
            digit++;
        }
		else if (str[i] == ' ')
		{
		} 
		else 
		{
            sp++;
        }
	}
	
	printf("\n\t Alfa : %d ",alfa);
	printf("\n\t Digit : %d ",digit);
	printf("\n\t Special Character : %d ",sp);
}
