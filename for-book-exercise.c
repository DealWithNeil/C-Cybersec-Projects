/*What output does the following for statement produce and put a break in the loop??*/

#include <stdio.h>

int main (void) {
int i;
for (i = 20; i >= 1; i /= 2) {
  printf("%d ", i);
  /*break statement below*/
  if (i == 1) {
    break;
  }
}


    return 0;
}