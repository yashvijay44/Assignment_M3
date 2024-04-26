#include<stdio.h>
main()
{
	char ch;
	printf("\n\n\t Input any character to check vowel or consonant : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'A' :          
		case 'E' : 
		case 'I' : 
		case 'O' :  
		case 'U' : 
		case 'a' :         
		case 'e' :          
		case 'i' :  
		case 'o' :           
		case 'u' : printf("\n\n\t Vowel ");
		           break;
		           
		default :
				   printf("\n\n\t Consonant ");
		           break;
	}
}

