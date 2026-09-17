#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 5;

    int *a = calloc(n, sizeof(int));

    /* Always verify allocation success */
    if (a == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("=== Dynamic Array Allocation with calloc ===\n");
    printf("Number of elements: %d\n", n);
    printf("Size of 1 int:      %zu bytes\n", sizeof(int));
    printf("Total memory:       %zu bytes\n\n", n * sizeof(int));

    printf("Elements immediately after allocation (guaranteed zero):\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    /* Release heap memory and reset pointer */
    free(a);
    a = NULL;

    return 0;
}