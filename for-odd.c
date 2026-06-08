/*Breaking a for loop for debugging a simple program*/

#include <stdio.h>

int main (void) {

    int i;

    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
        if (i == 5) {
            break; /*breaks the loop when i is 5*/
        }
    }

  return 0;
}