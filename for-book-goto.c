/*  Write a program that prints a one-month calendar. The user specifies the number of days in
the month and the day of the week on which the month begins*/

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
