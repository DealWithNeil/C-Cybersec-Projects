/*Display a basic program for this: Decimal constants contain digits between 0 and 9, but must not begin with a
zero*/

#include <stdio.h>

int main() {
    
int i;
short s;
scanf("%d", &i);
scanf("%hd", &s);
printf("%d %hd", i, s);

    return 0;
}
