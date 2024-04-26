#include <stdio.h>

main() 
{
    int i, num[5], max = 0;
    
    for (i = 0; i < 5; i++) 
	{
        printf("\n\tPlease Enter Number [%d] : ", i + 1);
        scanf("%d", &num[i]);
        
        if (i == 0 || num[i] > max) 
		{
            max = num[i]; 
        }
    }
    
    printf("\n\n\tMax Number Is : %d\n", max);
}
