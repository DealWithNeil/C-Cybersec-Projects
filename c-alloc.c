#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int *numbers = malloc(3 * sizeof(int));
    numbers[0] = 100;
    numbers[1] = 200;
    numbers[2] = 300;

    numbers = realloc(numbers, 2 * sizeof(int));

    printf("%d %d\n", numbers[0], numbers[1]);

    free(numbers);

    return 0;
}