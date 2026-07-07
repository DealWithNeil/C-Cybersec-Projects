/*The value of the mathematical constant e can be expressed as an infinite series:
e = 1 + 1/1! + 1/2! + 1/3! + …
Write a program that approximates e by computing the value of
1 + 1/1! + 1/2! + 1/3! + … + 1/n!
where n is an integer entered by the user.*/

#include <stdio.h>

int main() {
    int n, i;
    double e = 1.0, factorial = 1.0;
    printf("Enter an integer n to approximate e: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i; // Calculate i!
        e += 1.0 / factorial; // Add 1/i! to e
    }
    printf("Approximation of e using n = %d: %.10f\n", n, e);

    return 0;
}
