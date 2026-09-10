//Memory allocation: add double heap memory allocation example using malloc and free

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Dynamically allocate memory for a array of 5 integers */
    int count = 5;
    int *scores = malloc(count * sizeof(int));

    /* Check if memory allocation succeeded */
    if (scores == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    /* Assign values using array indexing */
    for (int i = 0; i < count; i++) {
        scores[i] = (i + 1) * 10;
    }

    /* Print the contents of the allocated array */
    printf("Scores: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    /* Free the allocated memory block and reset pointer */
    free(scores);
    scores = NULL;

    return 0;
}