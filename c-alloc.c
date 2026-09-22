#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double *prices = malloc(2 * sizeof(double));
    prices[0] = 19.99;
    prices[1] = 49.50;
    
    prices = realloc(prices, 3 * sizeof(double));
    prices[2] = 89.95;

    printf("%.2f %.2f %.2f\n", prices[0], prices[1], prices[2]);

    free(prices);

    return 0;
}