#include <stdio.h>
main()
{
    int weeknumber;

   
    printf("Enter Week Number : ");
    scanf("%d", &weeknumber);


    if(weeknumber == 1)
    {
        printf("\n\n\t Monday");
    }
    else if(weeknumber == 2)
    {
        printf("\n\n\t Tuesday");
    }
    else if(weeknumber == 3)
    {
        printf("\n\n\t Wednesday");
    }
    else if(weeknumber == 4)
    {
        printf("\n\n\t Thursday");
    }
    else if(weeknumber == 5)
    {
        printf("\n\n\t Friday");
    }
    else if(weeknumber == 6)
    {
        printf("\n\n\t Saturday");
    }
    else if(weeknumber == 7)
    {
        printf("\n\n\t Sunday");
    }
    
    else
    {
        printf("\n\n\t Input Right Week Number...");
    }

  
}
