/*Display a simple program for this and print it:  Complex types (float _Complex, double _Complex, long dou
ble _Complex)*/

#include <stdio.h>

int main(void)
{
    printf("Complex types in C17:\n");
    printf("float _Complex: %zu bytes\n", sizeof(float _Complex));
    printf("double _Complex: %zu bytes\n", sizeof(double _Complex));
    printf("long double _Complex: %zu bytes\n", sizeof(long double _Complex));

    return 0;
}
