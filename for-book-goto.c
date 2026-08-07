/* Display and print a basic multiple cast expression.*/

#include <stdio.h>

int main(void)
{
    int i = 10;
    double d = 3.14;
    char c = 'A';

    // Multiple cast expression
    double result = (double)(i + (int)d + (int)c);

    printf("Result of multiple cast expression: %f\n", result);

    return 0;
}
