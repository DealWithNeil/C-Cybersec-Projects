#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int *numbers = malloc(3 * sizeof(int));
    numbers[0] = 100;
    numbers[1] = 200;
    numbers[2] = 300;