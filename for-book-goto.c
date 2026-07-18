/*Give an example for this and print it: When reading a value of type double, put the letter l in front of e, f, or g:*/

#include <stdio.h>

int main(void)
{
  double n, sum = 0;
  printf("This program sums a series of doubles.\n");
  printf("Enter doubles (0 to terminate): ");
  scanf("%lf", &n);
  while (n != 0) {
    sum += n;
    scanf("%lf", &n);
  }
  printf("The sum is: %lf\n", sum);

    return 0;
}
