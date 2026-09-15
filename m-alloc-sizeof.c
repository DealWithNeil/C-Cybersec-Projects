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

    /* Display size details and array contents */
    printf("=== Double Array Allocation ===\n");
    printf("Size of 1 double: %zu bytes\n", sizeof(double));
    printf("Total memory:     %zu bytes\n\n", count * sizeof(double));

    for (int i = 0; i < count; i++) {
        printf("Price %d: $%.2f\n", i + 1, prices[i]);
    }

    /* Clean up memory */
    free(prices);
    prices = NULL;

    return 0;
}