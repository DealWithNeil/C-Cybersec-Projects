#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double *prices = malloc(2 * sizeof(double));
    prices[0] = 19.99;
    prices[1] = 49.50;