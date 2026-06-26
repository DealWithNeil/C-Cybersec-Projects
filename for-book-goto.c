/*Show how to replace a continue statement by an equivalent goto statement.*/

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

    return 0;
}