/*Displaying a nested if-else statement with multiple conditions */


#include <stdio.h>

    int maint (void) {

            int a, b, c;
    
            printf("Enter three integers: ");
            scanf("%d %d %d", &a, &b, &c);
    
            if (a > b) {
                if (a > c) {
                    printf("%d is the largest number.\n", a);
                } else {
                    printf("%d is the largest number.\n", c);
                }
            } else {
                if (b > c) {
                    printf("%d is the largest number.\n", b);
                } else {
                    printf("%d is the largest number.\n", c);
                }
            }

        return 0;
    }

