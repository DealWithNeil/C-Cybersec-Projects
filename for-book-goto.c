/*The value of the mathematical constant e can be expressed as an infinite series:
e = 1 + 1/1! + 1/2! + 1/3! + …
Write a program that approximates e by computing the value of
1 + 1/1! + 1/2! + 1/3! + … + 1/n!
where n is an integer entered by the user.*/

#include <stdio.h>

int main() {
    
int days, start_day, i, j;

    printf("Enter the number of days in the month: ");
    scanf("%d", &days);

    printf("Enter the starting day of the week (1=Sunday, 2=Monday, ..., 7=Saturday): ");
    scanf("%d", &start_day);

    printf("\nSun Mon Tue Wed Thu Fri Sat\n");

    for (i = 1; i < start_day; i++) {
        printf("    ");
    }

    for (j = 1; j <= days; j++) {
        printf("%3d ", j);
        if ((j + start_day - 1) % 7 == 0) {
            printf("\n");
        }
    }

    
    printf("\n");

    return 0;
}
