/*Display a simple program for this and print it: An octal escape sequence consists of the \ character followed by an octal
number with at most three digits. (This number must be representable as an
unsigned character, so its maximum value is normally 377 octal.)*/

#include <stdio.h>

int main(void)
{
    printf("Octal escape sequences:\n");
    printf("This is an octal escape sequence: \101\n"); // Represents 'A'
    printf("This is another octal escape sequence: \142\n"); // Represents 'b'
    printf("This is a third octal escape sequence: \143\n"); // Represents 'c'
    
    return 0;
}
