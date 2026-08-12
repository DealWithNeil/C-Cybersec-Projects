/* Display and print multiple memory allocator programs.*/

#include <stdio.h>

int main(void)
{
    int students[20];
    printf("%zu", sizeof(students)); // 80 bytes 

    int *ptr = (int *)malloc(20 * sizeof(int));
    int *ptr2 = (int *)calloc(20, sizeof(int));
    
    
    return 0;
}
