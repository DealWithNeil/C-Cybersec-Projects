/* Display and print a basic structure variable program: add zoo exhibit record example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define DRINK_LEN 30

int main(void)
{
    /* Anonymous struct declaring variable beverage1 */
    struct {
        int calories;
        char drink_name[DRINK_LEN + 1];
        double size_ounces;
    } beverage1;

    /* Assigning values to beverage1 members */
    beverage1.calories = 190;
    strcpy(beverage1.drink_name, "Iced Matcha Latte");
    beverage1.size_ounces = 16.0;

    /* Printing the contents of beverage1 */
    printf("=== Cafe Menu Item ===\n");
    printf("Item Name: %s\n", beverage1.drink_name);
    printf("Size:      %.1f oz\n", beverage1.size_ounces);
    printf("Calories:  %d kcal\n", beverage1.calories);

    return 0;
}