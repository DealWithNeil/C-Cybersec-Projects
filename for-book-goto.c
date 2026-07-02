/*Write a program that asks the user to enter two integers, then calculates and displays their
greatest common divisor (GCD)*/

#include <stdio.h>

int main() {
    int a, b, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    // Ensure a and b are positive
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
