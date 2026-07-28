/*Display a simple program for this and print it: if ('a' <= ch && ch <= 'z')
  ch = ch - 'a' + 'A';*/

#include <stdio.h>

int main(void)
{
    printf("Octal escape sequences:\n");
    printf("This is an octal escape sequence: \101\n"); // Represents 'A'
    printf("This is another octal escape sequence: \142\n"); // Represents 'b'
    printf("This is a third octal escape sequence: \143\n"); // Represents 'c'
    
    return 0;
}
