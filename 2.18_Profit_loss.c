#include <stdio.h>
main() 
{
    float c_price, s_price, profit, loss;

    printf("Enter the Cost price: ");
    scanf("%f", &c_price);

    printf("Enter the Selling price: ");
    scanf("%f", &s_price);

    if (s_price > c_price) 
	{
        profit = s_price - c_price;
        printf("Profit: %.2f\n", profit);
    } 
	else if (s_price < c_price) 
	{
        loss = c_price - s_price;
        printf("Loss: %.2f\n", loss);
    } else 
	{
        printf("No profit, no loss.\n");
    }
}

