/* Write a program that prompts the user to enter a number n, then prints all even squares
between 1 and n*/

#include <stdio.h>

int main() {
    
int n, i;
printf("Enter a number: ");
scanf("%d", &n);
for (i = 2; i <= n; i += 2) {
        printf("%d ", i * i);
    }
    printf("\n");

    return 0;
}
