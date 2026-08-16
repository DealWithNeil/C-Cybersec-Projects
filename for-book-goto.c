/* Display and print a basic structure variable program using anonymous structures pt3.*/

#include <stdio.h>
#include <string.h>

#define NAME_LEN 25

int main(void)
{
    /* Anonymous struct definition with initial values */
    struct {
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    } part1 = {528, "Disk drive", 10},
      part2 = {914, "Printer cable", 5};

    /* Modifying struct members */
    part1.on_hand += 15;                         /* Increase stock count */
    part2.number = 915;                          /* Update catalog number */
    strcpy(part2.name, "High-Speed Printer Cable"); /* Update string member */

    /* Printing modified values */
    printf("=== Part 1 (Modified) ===\n");
    printf("Number:  %d\n", part1.number);
    printf("Name:    %s\n", part1.name);
    printf("On Hand: %d\n\n", part1.on_hand);

    printf("=== Part 2 (Modified) ===\n");
    printf("Number:  %d\n", part2.number);
    printf("Name:    %s\n", part2.name);
    printf("On Hand: %d\n", part2.on_hand);

    return 0;
}