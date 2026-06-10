/*Balancing a checkbook*/

#include <stdio.h>

int main(void)
{
    char command;
    
    for (;;) {
        printf("Enter command: ");
        
        // Note the space before %c: This skips newline characters (\n) left in the buffer 
        // when you hit Enter, preventing the loop from printing "Enter command:" twice.
        scanf(" %c", &command); 
        
        switch (command) {
            case 'a': 
                printf("Performing operation 1...\n"); 
                break;
                
            case 'q':
                printf("Exiting program.\n");
                return 0; // Gracefully breaks the infinite loop and ends the program
                
            default:
                printf("Unknown command. Try again.\n");
                break;
        }
    } // End of for loop
    
    return 0;
}