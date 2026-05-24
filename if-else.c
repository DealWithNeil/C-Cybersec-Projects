/*Print multiple nested if-else statements with multiple conditions*/

#include <stdio.h>

int main () {

    int a = 10, b = 20, c = 30;

    if (a > b) {
        if (a > c) {
            printf("a is the greatest number.\n");
        } else {
            printf("c is the greatest number.\n");
        }
    } else {
        if (b > c) {
            printf("b is the greatest number.\n");
        } else {
            printf("c is the greatest number.\n");
        }
    }

  return 0;
}
