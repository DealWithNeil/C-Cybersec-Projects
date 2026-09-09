//add double heap memory allocation example using malloc and free
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Dynamically allocate memory for a single double */
    double *price = malloc(sizeof(double));

    /* Check if memory allocation succeeded */
    if (price == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    /* Assign a value to the allocated memory */
    *price = 99.99;

    /* Print the value stored at the allocated address */
    printf("Price: $%.2f\n", *price);

    /* Free the allocated memory and reset pointer */
    free(price);
    price = NULL;

    return 0;
}