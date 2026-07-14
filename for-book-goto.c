/*Hexadecimal constants contain digits between 0 and 9 and letters between a
and f, and always begin with 0x:
0xf  0xff  0x7fff*/

#include <stdio.h>

int main() {
    int octalConstant1 = 017;   // Valid octal constant
    int octalConstant2 = 0377;  // Valid octal constant
    int octalConstant3 = 077777; // Valid octal constant

    printf("Octal constant 1: %d\n", octalConstant1);
    printf("Octal constant 2: %d\n", octalConstant2);
    printf("Octal constant 3: %d\n", octalConstant3);

    return 0;
}
