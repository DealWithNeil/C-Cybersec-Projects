#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 4;

    /* Allocate dynamic memory for an array of 4 doubles using sizeof */
    double *prices = malloc(count * sizeof(double));

    /* Verify allocation succeeded */
    if (prices == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    /* Assign values using standard array indexing */
    prices[0] = 12.99;
    prices[1] = 5.50;
    prices[2] = 24.00;
    prices[3] = 8.75;