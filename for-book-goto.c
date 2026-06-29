/*What output does the following program fragment produce?*/

#include <stdio.h>

int main(void) {
    int sum = 0;
    int i;
    
    for (i = 0; i < 10; i++) {
        // Writing (i % 2 != 0) makes it clear we are skipping odd numbers
        if (i % 2 != 0) {
            continue;
        }
        sum += i;
    } 
    
    printf("%d\n", sum);

    return 0;
}