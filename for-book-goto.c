/* Display and print a basic structure variable program using anonymous structures pt4.*/

#include <stdio.h>
#include <string.h>

#define NAME_LEN 25

int main(void)
{
    /* Anonymous struct definition declaring variable part1 */
    struct {
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    } part1;

    /* Assigning values to part1 members */
    part1.number = 204;
    strcpy(part1.name, "Solid State Drive");
    part1.on_hand = 12;

    /* Printing the contents of part1 */
    printf("=== Part Information ===\n");
    printf("Part Number: %d\n", part1.number);
    printf("Part Name:   %s\n", part1.name);
    printf("Quantity:    %d\n", part1.on_hand);

    return 0;
}