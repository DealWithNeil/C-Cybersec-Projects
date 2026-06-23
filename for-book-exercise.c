/*Which one of the following statements is not equivalent to the other two (assuming that the
loop bodies are the same)?*/

#include <stdio.h>

int main (void) {
for (i = 10; i >= 1; i /= 2)
  printf("%d ", i++);

    return 0;
}