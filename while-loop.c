/*Print a basic while loop program*/

#include <stdio.h>

int main  () {

  int i = 1;
  int n = 10;

  while (i < n)   /* controlling expression */
    i = i * 2;    /* loop body */

    printf("The value of i is %d\n", i);

  return 0;
}
