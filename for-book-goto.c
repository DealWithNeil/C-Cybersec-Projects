/* Display and print a basic structure variable program: add workout log example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define EXERCISE_LEN 35

int main(void)
{
    /* Anonymous struct declaring variable workout1 */
    struct {
        int set_count;
        char exercise_name[EXERCISE_LEN + 1];
        double weight_kg;
    } workout1;

    /* Assigning values to workout1 members */
    workout1.set_count = 4;
    strcpy(workout1.exercise_name, "Barbell Bench Press");
    workout1.weight_kg = 82.5;

    /* Printing the contents of workout1 */
    printf("=== Fitness Log Details ===\n");
    printf("Exercise: %s\n", workout1.exercise_name);
    printf("Sets:     %d\n", workout1.set_count);
    printf("Weight:   %.1f kg\n", workout1.weight_kg);

    return 0;
}