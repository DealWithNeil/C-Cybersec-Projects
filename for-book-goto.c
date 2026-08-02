/* Display a type conversion example for the whole program and print it.*/

#include <stdio.h>

int main(void)
{
  printf("Type Conversion Example\n");
  int x = 5;
  double y = 2.5;
  double result = x + y; // Implicit type conversion from int to double
  printf("Result: %f\n", result); 

  return 0;
}
