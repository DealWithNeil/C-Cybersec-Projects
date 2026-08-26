/* Display and print a basic structure variable program: add conference event example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define DISH_LEN 35

int main(void)
{
    /* Anonymous struct declaring variable order1 */
    struct {
        int table_number;
        char dish_name[DISH_LEN + 1];
        double price;
    } order1;

    /* Assigning values to order1 members */
    order1.table_number = 12;
    strcpy(order1.dish_name, "Truffle Mushroom Risotto");
    order1.price = 24.50;

    /* Printing the contents of order1 */
    printf("=== Restaurant Order Details ===\n");
    printf("Table Number: %d\n", order1.table_number);
    printf("Dish Name:    %s\n", order1.dish_name);
    printf("Price:        $%.2f\n", order1.price);

    return 0;
}