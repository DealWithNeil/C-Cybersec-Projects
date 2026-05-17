/*Often the expression in an if statement will test whether a variable falls
within a range of values.  */

#include <stdio.h>

    int main (void) {

    int x = 5;

    if (x > 0 && x < 10) {
        printf("x is a positive single digit number.\n");

        return 0;

    }