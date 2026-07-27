/*Display a simple program for this and print it: An octal escape sequence consists of the \ character followed by an octal
number with at most three digits. (This number must be representable as an
unsigned character, so its maximum value is normally 377 octal.)*/
#include <stdio.h>

int main(void)
{
    printf("float _Complex: %zu bytes\n", sizeof(float _Complex));
    printf("double _Complex: %zu bytes\n", sizeof(double _Complex));
    printf("long double _Complex: %zu bytes\n", sizeof(long double _Complex));

    return 0;
}
