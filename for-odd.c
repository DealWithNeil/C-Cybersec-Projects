/* Prints a for loop with continue statement */
#include <stdio.h>
int main(void)
{
  int n = 0, i, sum = 0;
  /* 6.4    Exiting from a Loop
     113 */
  while (n < 10) {
    scanf("%d", &i);
  if (i == 0)
    continue;
  sum += i;
  n++;
  /* continue jumps to here */
}
  return 0;
}