/*Display a simple program for this and print it:  Unsigned integer types, both standard (unsigned char, unsigned
short int, unsigned int, unsigned long int, unsigned
long long int, _Bool) and extended*/

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
