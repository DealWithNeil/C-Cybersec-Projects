/* Display and print a basic structure variable program: add workout log example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define ANIMAL_LEN 35

int main(void)
{
    /* Anonymous struct declaring variable exhibit1 */
    struct {
        int enclosure_id;
        char animal_species[ANIMAL_LEN + 1];
        double daily_food_kg;
    } exhibit1;

    /* Assigning values to exhibit1 members */
    exhibit1.enclosure_id = 104;
    strcpy(exhibit1.animal_species, "Bengal Tiger");
    exhibit1.daily_food_kg = 6.50;

    /* Printing the contents of exhibit1 */
    printf("=== Zoo Exhibit Record ===\n");
    printf("Species:      %s\n", exhibit1.animal_species);
    printf("Enclosure ID: #%d\n", exhibit1.enclosure_id);
    printf("Daily Food:   %.2f kg\n", exhibit1.daily_food_kg);

    return 0;
}