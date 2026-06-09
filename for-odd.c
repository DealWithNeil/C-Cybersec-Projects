/*Display a basic for loop with go to*/

#include <stdio.h>

int main(void)
{
    int i = 1;

    loop:
        printf("%d ", i);
        i += 2;
        if (i <= 10)
            goto loop;

    printf("\n");
    return 0;
}