/*Display a simple program for this and print it: ch = getchar();*/

#include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ('a' <= ch && ch <= 'z')
        ch = ch - 'a' + 'A';
    printf("The uppercase character is: %c\n", ch);
    
    return 0;
}
