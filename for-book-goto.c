/*print a basic program for this example: 

short s;
scanf("%hd", &s);
printf("%hd", s);*/

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
