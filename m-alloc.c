//Memory allocation: add dynamic double array allocation example using malloc
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Dynamically allocate memory for an array of 4 doubles */
    int count = 4;
    double *temperatures = malloc(count * sizeof(double));

    /* Check if memory allocation succeeded */
    if (temperatures == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    /* Assign values using array indexing */
    temperatures[0] = 98.6;
    temperatures[1] = 99.1;
    temperatures[2] = 97.8;
    temperatures[3] = 100.4;

    /* Print the contents of the allocated array */
    printf("Temperature Readings:\n");
    for (int i = 0; i < count; i++) {
        printf("Reading %d: %.1f F\n", i + 1, temperatures[i]);
    }

    /* Free the allocated memory block and reset pointer */
    free(temperatures);
    temperatures = NULL;

    return 0;
}