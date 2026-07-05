/*  Write a program that prints a one-month calendar. The user specifies the number of days in
the month and the day of the week on which the month begins*/

#include <stdio.h>

int main() {
    int days, start_day;
    int i, j;

    printf("Enter the number of days in the month: ");
    scanf("%d", &days);
    printf("Enter the day of the week the month begins (0=Sunday, 1=Monday, ..., 6=Saturday): ");
    scanf("%d", &start_day);

    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    for (i = 0; i < start_day; i++) {
        printf("    ");
    }

    for (i = 1; i <= days; i++) {
        printf("%3d ", i);
        if ((i + start_day) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}
