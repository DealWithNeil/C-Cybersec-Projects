/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main (void) {

    int digit, sum = 0;
    
    printf ("Enter the first 11 digits of a UPC: ");

    for (int i = 0; i < 11; i++) {
        scanf ("%1d", &digit);
        if (i % 2 == 0) {
            sum += digit * 3;
        } else {
            sum += digit;
        }
    }
    
    return 0;
}