#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num_elements = 5;

    /* 
     * Use sizeof(int) to calculate the exact byte size needed 
     * for 5 integers on the host machine architecture.
     */
    int *array = malloc(num_elements * sizeof(int));

    /* Check if the heap allocation was successful */
    if (array == NULL) {
        printf("Error: Heap allocation failed.\n");
        return 1;
    }

    /* Demonstrate byte sizing differences explained in text */
    printf("=== Dynamic Array Memory Allocation ===\n");
    printf("Element Count:   %d\n", num_elements);
    printf("Size of 1 int:   %zu bytes\n", sizeof(int));
    printf("Total Allocated: %zu bytes\n\n", num_elements * sizeof(int));

    /* Populate the dynamic array */
    for (int i = 0; i < num_elements; i++) {
        array[i] = (i + 1) * 10;
    }

    /* Display elements stored in the allocated memory block */
    printf("Array Elements: ");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    /* Release heap memory back to the system and reset pointer */
    free(array);
    array = NULL;

    return 0;
}