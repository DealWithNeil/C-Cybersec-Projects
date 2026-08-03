/* Display a basic arithmetic operation and print multiple lines of it.*/

#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 3;
    int sum = a + b;

    printf("The sum of %d and %d is: %d\n", a, b, sum);
    printf("This is a simple arithmetic operation.\n");
    printf("You can perform addition, subtraction, multiplication, and division.\n");
    printf("For example:\n");
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %.2f\n", a, b, (float)a / b);
    
    return 0;
}
