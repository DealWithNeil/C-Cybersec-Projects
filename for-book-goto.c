/*Display a simple program for this and print it:   floating types (float _Complex, double _Complex, long double _Complex)*/
#include <stdio.h>

int main(void)
{
    printf("Real types in C17:\n");
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("long double: %zu bytes\n", sizeof(long double));
    printf("\nComplex types in C17:\n");
    printf("float _Complex: %zu bytes\n", sizeof(float _Complex));
    printf("double _Complex: %zu bytes\n", sizeof(double _Complex));
    printf("long double _Complex: %zu bytes\n", sizeof(long double _Complex));

    return 0;
}
