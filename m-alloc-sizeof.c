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