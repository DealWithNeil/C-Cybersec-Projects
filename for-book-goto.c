/* Display and print a basic structure variable program using anonymous structures.*/

#include <stdio.h>

#define NAME_LEN 25

int main(void)
{
    /* Anonymous struct definition declaring two variables: part1 and part2 */
    struct {
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    } part1, part2;

    /* Example initialization / usage */
    part1.number = 101;
    part1.on_hand = 50;

    printf("Part 1 Number: %d\n", part1.number);
    printf("Part 1 On Hand: %d\n", part1.on_hand);

    return 0;
}
