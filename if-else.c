/*Displaying a multiple nested if-else statements with multiple conditions and operators */


#include <stdio.h>

    int main () {
        int a = 10, b = 20, c = 30;
        if (a > b && a > c) {
            printf("a is the greatest number");
        }
        else if (b > a && b > c) {
            printf("b is the greatest number");
        }
        else if (c > a && c > b) {
            printf("c is the greatest number");
        }
        else {
            printf("All numbers are equal");
        }

        return 0;
    }
