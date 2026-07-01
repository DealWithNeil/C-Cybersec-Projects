/*Write a program that finds the largest in a series of numbers entered by the user. The pro
gram must prompt the user to enter numbers one by one. When the user enters 0 or a nega
tive number, the program must display the largest nonnegative number entered:*/

#include <stdio.h>

int main() {
    int number, largest = -1;
    printf("Enter numbers one by one (enter 0 or a negative number to stop):\n");
    while (1) {
        scanf("%d", &number);
        if (number <= 0) {
            break;
        }
        if (number > largest) {
            largest = number;
        }
    }
    if (largest >= 0) {
        printf("The largest nonnegative number entered is: %d\n", largest);
    } else {
        printf("No nonnegative number was entered.\n");
    }       
    return 0;
}