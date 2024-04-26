#include <stdio.h>

int main() 
{
    float expenses[5],total = 0,average;
    int i;

    printf("Enter 5 expenses:\n");
    for (i = 0; i < 5; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        total += expenses[i];
    }
    average = total / 5;
    printf("The average expense is: %.2f\n", average);

    
}
