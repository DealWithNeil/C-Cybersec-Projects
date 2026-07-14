/*Hexadecimal constants contain digits between 0 and 9 and letters between a
and f, and always begin with 0x:
0xf  0xff  0x7fff*/

#include <stdio.h>

int main() {
    
    int hexConstant1 = 0xf;    // Valid hexadecimal constant
    int hexConstant2 = 0xff;   // Valid hexadecimal constant
    int hexConstant3 = 0x7fff; // Valid hexadecimal constant

    printf("Hexadecimal constant 1: %d\n", hexConstant1);
    printf("Hexadecimal constant 2: %d\n", hexConstant2);
    printf("Hexadecimal constant 3: %d\n", hexConstant3);

    return 0;
}
