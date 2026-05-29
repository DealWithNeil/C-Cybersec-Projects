/*Basic Countdown Program with funny messages*/

#include <stdio.h>

int main(void) {
    int i = 10;
    while (i > 0) {
        printf("T minus %d and counting\n", i);
        i--;
    }
    printf("Liftoff!\n");
    return 0;
}