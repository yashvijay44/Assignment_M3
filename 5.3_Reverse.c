#include <stdio.h>
#include <string.h>

main() 
{
    char name[100];
    printf("\n\n\tEnter a Name : ");
    scanf("%s", name);

    printf("\n\n\t Reverse Name = %s",strrev(name));

    
}
