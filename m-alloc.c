// feat: add basic heap memory allocation example using malloc and free

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Dynamically allocate memory for a single integer */
    int *num = malloc(sizeof(int));

    /* Check if the memory allocation was successful */
    if (num == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    /* Assign a value to the allocated memory */
    *num = 42;

    /* Print the value stored at the allocated address */
    printf("Value: %d\n", *num);

    /* Free the allocated memory and reset pointer */
    free(num);
    num = NULL;

    return 0;
}