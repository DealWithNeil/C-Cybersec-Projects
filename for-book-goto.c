/*The value of the mathematical constant e can be expressed as an infinite series:
e = 1 + 1/1! + 1/2! + 1/3! + …
Write a program that approximates e by computing the value of
1 + 1/1! + 1/2! + 1/3! + … + 1/n!
where n is an integer entered by the user.*/

/*Modify the program so that the program continues adding terms until the current term becomes less than ε, where ε is a small (floating-point) number entered by the user.
*/

#include <stdio.h>

int main() {
    int n, i;
    double e = 1.0, factorial = 1.0, epsilon;
    printf("Enter an integer n to approximate e: ");
    scanf("%d", &n);
    printf("Enter the tolerance epsilon: ");
    scanf("%lf", &epsilon);

    double term = 1.0;
    i = 1;
    while (term >= epsilon) {
        factorial *= i; // Calculate i!
        term = 1.0 / factorial; // Calculate the current term
        e += term; // Add the current term to e
        i++;
    }
    printf("Approximation of e: %.10f\n", e);

    return 0;
}
