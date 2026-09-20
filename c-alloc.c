#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* 1. Allocate initial memory for 2 integers */
    int *arr = malloc(2 * sizeof(int));
    arr[0] = 10;
    arr[1] = 20;

    /* 2. Resize the array to hold 4 integers */
    arr = realloc(arr, 4 * sizeof(int));
    arr[2] = 30;
    arr[3] = 40;

    /* Print all 4 elements */
    printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);

    /* 3. Free memory */
    free(arr);

    return 0;
}