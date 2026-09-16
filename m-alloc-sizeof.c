#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 3;

    /* Allocate dynamic memory for an array of 3 floats using sizeof */
    float *scores = malloc(count * sizeof(float));

    /* Check if the memory allocation succeeded */
    if (scores == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    /* Assign values to the float array elements */
    scores[0] = 88.5f;
    scores[1] = 92.0f;
    scores[2] = 79.4f;