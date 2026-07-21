/*Modify this program and give another example then print it: char ch;
int i;
i = 'a';       
ch = 65;       
ch = ch + 1;   
ch++;   
*/
#include <stdio.h>

int main(void)
{
    char ch;
    int i;
    i = 'a';       // Assigning the ASCII value of 'a' to integer
    ch = 65;       // Assigning the ASCII value of 'A' to char
    ch = ch + 1;   // Incrementing the char value by 1 (
    ch++;         // Incrementing the char value by 1 using post-increment operator
    printf("The character is: %c\n", ch);
    printf("The integer value is: %d\n", i);
    return 0;
}
