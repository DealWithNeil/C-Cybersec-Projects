/*Write a program that asks the user to enter two integers, then calculates and displays their
greatest common divisor (GCD)*/

#include <stdio.h>
#include <stdlib.h> // For abs() or custom checks

int main() {
    int a, b, gcd;
    printf("Enter two integers: ");
    
    // Check if scanf successfully read two numbers
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Error: Invalid input.\n");
        return 1;
    }
    
    // Handle the 0 edge case directly
    if (a == 0 && b == 0) {
        printf("The GCD of 0 and 0 is undefined.\n");
        return 0;
    }

    // Ensure a and b are positive (and protect against INT_MIN)
    if (a == -2147483648 || b == -2147483648) {
        printf("Error: Input number is too small to process.\n");
        return 1;
    }
    
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    // Calculate GCD using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b; 
        a = temp;
    }
    gcd = a;
    
    printf("The GCD of the two numbers is: %d\n", gcd);
    return 0;
}
