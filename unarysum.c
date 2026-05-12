/*Applying simple assignment operators*/

#include <stdio.h>

int main () {

  int i = 5;            /* i is now 5  */
  int j = i;            /* j is now 5  */
  int k = 10 * i + j;   /* k is now 55 */
  
  printf("i = %d\n", i);
  printf("j = %d\n", j);
  printf("k = %d\n", k);

  return 0;
}