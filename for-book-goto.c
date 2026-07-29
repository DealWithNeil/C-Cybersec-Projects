/*Display a simple program for this and print it: ch = getchar();*/

#include <stdio.h>

int main(void)
{
    int ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: %c\n", ch);
    
    return 0;
}
