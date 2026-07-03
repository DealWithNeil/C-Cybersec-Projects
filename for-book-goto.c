/*Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
terms*/

#include <stdio.h>
#include <stdlib.h> // For abs() or custom checks

int main() {
    int numerator, denominator, gcd;
    printf("Enter a fraction (numerator/denominator): ");
    scanf("%d/%d", &numerator, &denominator);

    // Calculate GCD using Euclidean algorithm
    int a = abs(numerator);
    int b = abs(denominator);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Reduce the fraction
    numerator /= gcd;
    denominator /= gcd;

    printf("The reduced fraction is: %d/%d\n", numerator, denominator);
    return 0;
}
