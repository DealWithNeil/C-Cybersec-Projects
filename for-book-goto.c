/*Show how to replace a continue statement by an equivalent goto statement, also display a sample break statement.*/

#include <stdio.h>

int main (void) {

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            goto skip; // Replace continue with goto
        }
        printf("%d ", i);
        skip:; // Label to jump to
    }
    printf("\n");

    for (int j = 1; j <= 10; j++) {
        if (j == 5) {
            break; // Sample break statement
        }
        printf("%d ", j);
    }

    return 0;
}