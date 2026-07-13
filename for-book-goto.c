/*Display a basic program for this: DOctal constants contain only digits between 0 and 7, and must begin with a
zero:
017  0377  077777
*/

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
