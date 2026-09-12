//Memory allocation: add dynamic double array allocation example using malloc

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_LEN 50

int main(void)
{
    /* Dynamically allocate memory for a string (char array) */
    char *message = malloc((STRING_LEN + 1) * sizeof(char));

    /* Check if memory allocation succeeded */
    if (message == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    /* Assign string data using strcpy */
    strcpy(message, "Dynamic memory allocation for strings in C!");

    /* Print the contents of the allocated string */
    printf("Message: %s\n", message);

    /* Free the allocated memory block and reset pointer */
    free(message);
    message = NULL;

    return 0;
}