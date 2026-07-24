/*Display a simple program for this and print it:  Complex types (float _Complex, double _Complex, long dou
ble _Complex)*/

#include <stdio.h>

int main(void)
{
    printf("Unsigned integer types:\n");
    printf("unsigned char: %zu bytes\n", sizeof(unsigned char));
    printf("unsigned short int: %zu bytes\n", sizeof(unsigned short int));
    printf("unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("unsigned long int: %zu bytes\n", sizeof(unsigned long int));
    printf("unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
    printf("_Bool: %zu bytes\n", sizeof(_Bool));

    return 0;
}
