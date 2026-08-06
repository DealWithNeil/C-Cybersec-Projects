/* Display and print a basic cast expression.*/

#include <stdio.h>

int main(void)
{
    
char c;
int i;
float f;
double d;
i = c;   /* c is converted to int   */
f = i;   /* i is converted to float */
d = f;   /* f is converted to double */
printf("c = %c, i = %d, f = %f, d = %lf\n", c, i, f, d);

    return 0;
}
