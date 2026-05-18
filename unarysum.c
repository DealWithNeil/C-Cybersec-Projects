/*Displaying if-else statements  */

#include <stdio.h>

int main () {

    int i = 10, j = 20, k = 15, max;
        if (i > j)
        if (i > k) 
        max = i;
        else 
        max = k;
        else
        if (j > k) 
        max = j;
        else 
        max = k;
    printf("The maximum value is %d\n", max);
    return 0;
}