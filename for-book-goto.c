/* Display and print a basic structure variable program: different data types and macro name is updated.*/

#include <stdio.h>
#include <string.h>

#define MODEL_LEN 30

int main(void)
{
    /* Anonymous struct declaring variable car1 */
    struct {
        int year;
        char model[MODEL_LEN + 1];
        double price;
    } car1;

    /* Assigning values to car1 members */
    car1.year = 2024;
    strcpy(car1.model, "Cyber Coupe");
    car1.price = 45990.50;

    /* Printing the contents of car1 */
    printf("=== Vehicle Information ===\n");
    printf("Model Year: %d\n", car1.year);
    printf("Model Name: %s\n", car1.model);
    printf("Price:      $%.2f\n", car1.price);

    return 0;
}