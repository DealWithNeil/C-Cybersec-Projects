/*Print multiple statements with logical operators*/

#include <stdio.h>

int main (void) {

    int a = 5, b = 10, c = 15;
    if (a < b && b < c) {
        printf("a is less than b and b is less than c\n");
    }
    else if (a < b || b < c) {
        printf("Either a is less than b or b is less than c\n");
    }
    else {
        printf("Neither a is less than b nor b is less than c\n");
    }


    return 0;
}