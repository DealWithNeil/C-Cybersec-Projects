/* Display and print a basic structure variable program: add agricultural harvest log example using anonymous struct.*/

#include <stdio.h>
#include <string.h>

#define COFFEE_LEN 35

int main(void)
{
    /* Anonymous struct declaring variable batch1 */
    struct {
        int roast_level;
        char bean_origin[COFFEE_LEN + 1];
        double bag_weight_kg;
    } batch1;

    /* Assigning values to batch1 members */
    batch1.roast_level = 3;
    strcpy(batch1.bean_origin, "Ethiopia Yirgacheffe");
    batch1.bag_weight_kg = 2.50;

    /* Printing the contents of batch1 */
    printf("=== Coffee Roastery Batch ===\n");
    printf("Bean Origin: %s\n", batch1.bean_origin);
    printf("Roast Level: %d (Medium-Light)\n", batch1.roast_level);
    printf("Batch Size:  %.2f kg\n", batch1.bag_weight_kg);

    return 0;
}