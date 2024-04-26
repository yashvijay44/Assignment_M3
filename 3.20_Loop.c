#include <stdio.h>

main() 
{
    int i,j,num = 1; 

    for (i=0;i<5;i++) 
	{
        for (j=0;j<10;j++) 
		{
            printf("%02d ", num++);
        }
        
        printf("\n");
    }
}
