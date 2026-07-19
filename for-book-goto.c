/*Give an example for this and print it: char ch;
ch = 'a';   
ch = 'A';   
ch = '0';   
ch = ' ';   
*/
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
